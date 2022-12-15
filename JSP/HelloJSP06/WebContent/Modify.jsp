<%@page import="java.sql.DriverManager"%>
<%@page import="java.sql.ResultSet"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.Connection"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<!-- loginResult.jsp -> 2-3) -->
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<!-- DB에서 값을 읽어오고, id를 통해서 조회할 것 -->
	<!-- modifyOk에서 update를 할 것 -->
	<!-- modifyResult.jsp에서 결과 확인할 것 -->
	<%! String strName, strID, strGender; %>
	<% 
		strName = (String)session.getAttribute("name");
		strID = (String)session.getAttribute("id");
		strGender = (String)session.getAttribute("gender");
	%>
		<%-- 적은 것들이 ModifyOk로 넘어감 --%>
		<form action="ModifyOk" method="post">		<!-- 자바변수를 태그안에 넣은 것-->
			이름 : <input type="text" name="name" value=<%=strName %>/> <br />
			<%-- readonly : input태그 수정 불가능 --%>
			<%-- 참고사항 : disabled를 추가하면 비활성화됨. 근데 파라메터로 전송이 안 됨
			이 경우엔 readonly만 추가해주면 됨 --%>
			<%-- ID : <input type="text" name="id" value=<%=strID %> readonly></input> <br /> --%>
			ID : <%=strID %> <br />			
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










