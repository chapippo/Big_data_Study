<%@page import="javax.naming.InitialContext"%>
<%@page import="javax.naming.Context"%>
<%@page import="javax.sql.DataSource"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@page import="java.sql.PreparedStatement"%>
<%@page import="java.sql.Connection"%>
<%@page import="java.sql.ResultSet"%>
<%@page import="java.sql.Statement"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<!-- DB에서 값을 읽어오고, id를 통해서 조회할 것 -->
	<!-- modifyOk에서 update를 할 것 -->
	<!-- modifyResult.jsp에서 결과 확인할 것 -->
	<%! String strName, strID, strPW, strGender; %>
		<% 
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");	//jar에 있는 db 연결 소스 참조한 것
		} catch (Exception e1) {
			e1.printStackTrace();
		}
		
		
		Connection conn = null;	//DB 연결에 관련된 객체들
		Statement stmt = null;
		ResultSet rs = null;
		PreparedStatement pstmt = null;
		
		DataSource ds = null;

		try{
			Context ctx = new InitialContext();
			ds = (DataSource)ctx.lookup("java:comp/env/jdbc/mysql");

			
			//쿼리문 실행 관련 객체 생성(쿼리문 실행 준비)
			stmt = conn.createStatement();
			
			//session에서 ID 받아올 것
			strID = (String)session.getAttribute("id");
			/* strID = "jinhyuk7"; //콘솔창에서 한명만 조회하고 싶을 때 */
			//session에서 받은 ID 이용해서 조회할 것
			String strQuery = "select * from member where id= '"+strID+"'";
			rs = stmt.executeQuery(strQuery);
			
			rs.next();	//한 줄 읽어오기(어차피 id 기준이면 1개만 조회됨)
			
			strName = rs.getString("name");
			strID = rs.getString("id");
			
			System.out.println(strName);
			System.out.println(strID);
			
					
		} catch(Exception e) {
			e.printStackTrace();
		} finally {	//DB 호출하고 쿼리문 날렸으면 무조건 닫아줘야 함
			try {	//그래야 다른 사용자들도 쓰고 다시 쓸 수 있다
				stmt.close();
				conn.close();
			} catch (Exception e2) {
				e2.printStackTrace();	//남용 x
			}			
		}
		%>
		<form action="ModifyOK" method="post">		<!-- 자바변수를 태그안에 넣은 것-->
			이름 : <input type="text" name="name" value=<%=strName %>/> <br />
			<%-- readonly : input태그 수정 불가능 --%>
			<%-- 참고사항 : disabled를 추가하면 비활성화됨. 근데 파라메터로 전송이 안 됨
			이 경우엔 readonly만 추가해주면 됨 --%>
			<%-- ID : <input type="text" name="id" value=<%=strID %> readonly></input> <br /> --%>
			ID : <%=strID %> <br />
			PW : <input type="password" name="pw" value=<%=strPW %>> <br />			
			성별구분 :
			<% if(strGender.equals("man")) { %>
				<input type="radio" name="gender" value="man" checked/>남
				<input type="radio" name="gender" value="woman" />여
			<% } else { %>
				<input type="radio" name="gender" value="man" />남
				<input type="radio" name="gender" value="woman" checked />여
			<% } %>
			
			
			<input type="submit" value="정보수정" /> <br />
			<input type="reset" value="취소"/>
		</form>

</body>
</html>