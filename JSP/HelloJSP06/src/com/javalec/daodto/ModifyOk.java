package com.javalec.daodto;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

//Modify.jsp -> 2-4)

/**
 * Servlet implementation class ModifyOK
 */
@WebServlet("/ModifyOk")
public class ModifyOk extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ModifyOk() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doAction(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doAction(request, response);
	}
	//doAction 메소드 만들기
	protected void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("utf-8");
		
		//HttpSession httpSession = request.getSession();
		
		String id = (String)request.getSession().getAttribute("id");	//session은 session에 담겨있는 값 가져오고
		String name = request.getParameter("name");
		String gender = request.getParameter("gender");
		
		MemberDAO dao = new MemberDAO();
		MemberDTO m = new MemberDTO();
		m.setId(id);
		m.setName(name);
		m.setGender(gender);
		dao.memberUpdate(m); //db쿼리 호출하여 수정 예정
		
		request.getSession().setAttribute("name", m.getName());
		response.sendRedirect("modifyResult.jsp");
		
		
	}
		
}







