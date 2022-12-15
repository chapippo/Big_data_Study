package com.myjsp.mytest;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Arrays;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

// 1-1)

/**
 * Servlet implementation class JoinOk
 */
@WebServlet({ "/JoinOk", "/joinok", "/JOINOK", "/JoinOK" })
public class JoinOk extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public JoinOk() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		try {
			doAction(request, response);
		} catch (ClassNotFoundException | ServletException | IOException | SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		try {
			doAction(request, response);
		} catch (ClassNotFoundException | ServletException | IOException | SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	//이 서블릿은 (웹에 있는 구성요소이지만) 화면도 아니고 db에 날려주기만
	//성공하면 joinresult로 넘어감, 실패하면 다시 join.html로 넘어감
	protected void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException, SQLException, ClassNotFoundException {
		// TODO Auto-generated method stub
		request.setCharacterEncoding("UTF-8");
		
		// 회원가입 화면에서의 데이터들 불러옴
		String strName = request.getParameter("name");
		String strId = request.getParameter("id");
		String strPw = request.getParameter("pw");
		String strPhone = request.getParameter("phone") + "-" + 
						request.getParameter("phone2") + "-" +
						request.getParameter("phone3");
		String strGender = request.getParameter("gender");
		
		String[] hobbys = request.getParameterValues("hobby");
		String strHobby = Arrays.toString(hobbys);
		
		System.out.println("insert에 삽입될 값들");
		System.out.println(strName);
		System.out.println(strId);
		System.out.println(strPw);
		System.out.println(strPhone);
		System.out.println(strGender);
		System.out.println(strHobby);	//log 찍히는 거 확인
		
		
		String strQuery = String.format
				("insert into member values ("+"'%s', '%s', '%s', '%s', '%s', '%s')",
				strName, strId, strPw, strPhone, strGender, strHobby);
		
		System.out.println(strQuery);
		
		
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");	//jar에 있는 db 연결 소스 참조한 것
		} catch (Exception e1) {
			e1.printStackTrace();
		}
		
		Connection conn = null;	//DB 연결에 관련된 객체들
		Statement stmt = null;
		ResultSet rs = null;

		try{
			//DB 연결에 필요한 정보들
			//DB위치, 스키마 이름, 인코딩 등등
			String jdbcDriver = "jdbc:mysql://localhost:3306/jspdb?"+
								"useUnicode=true&characterEncoding=utf8&"+
								"serverTimezone=UTC";
			String dbUser = "root";
			String dbPass = "1234";

			//연결을 만듦
			conn = DriverManager.getConnection(jdbcDriver,dbUser,dbPass);
			//쿼리문 실행 관련 객체 생성(쿼리문 실행 준비)
			stmt = conn.createStatement();
			int i = stmt.executeUpdate(strQuery);	//db에 쿼리보냄
			if(i==1) //성공(insert 성공시 영향받는 컬럼은 1개니까!!!)
			{
				System.out.println("성공");
				response.sendRedirect("joinResult.jsp");
			}
			else
			{
				System.out.println("실패");
				response.sendRedirect("join.html");
			}
		
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
	}
}









