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
	
	//�� ������ (���� �ִ� �������������) ȭ�鵵 �ƴϰ� db�� �����ֱ⸸
	//�����ϸ� joinresult�� �Ѿ, �����ϸ� �ٽ� join.html�� �Ѿ
	protected void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException, SQLException, ClassNotFoundException {
		// TODO Auto-generated method stub
		request.setCharacterEncoding("UTF-8");
		
		// ȸ������ ȭ�鿡���� �����͵� �ҷ���
		String strName = request.getParameter("name");
		String strId = request.getParameter("id");
		String strPw = request.getParameter("pw");
		String strPhone = request.getParameter("phone") + "-" + 
						request.getParameter("phone2") + "-" +
						request.getParameter("phone3");
		String strGender = request.getParameter("gender");
		
		String[] hobbys = request.getParameterValues("hobby");
		String strHobby = Arrays.toString(hobbys);
		
		System.out.println("insert�� ���Ե� ����");
		System.out.println(strName);
		System.out.println(strId);
		System.out.println(strPw);
		System.out.println(strPhone);
		System.out.println(strGender);
		System.out.println(strHobby);	//log ������ �� Ȯ��
		
		
		String strQuery = String.format
				("insert into member values ("+"'%s', '%s', '%s', '%s', '%s', '%s')",
				strName, strId, strPw, strPhone, strGender, strHobby);
		
		System.out.println(strQuery);
		
		
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");	//jar�� �ִ� db ���� �ҽ� ������ ��
		} catch (Exception e1) {
			e1.printStackTrace();
		}
		
		Connection conn = null;	//DB ���ῡ ���õ� ��ü��
		Statement stmt = null;
		ResultSet rs = null;

		try{
			//DB ���ῡ �ʿ��� ������
			//DB��ġ, ��Ű�� �̸�, ���ڵ� ���
			String jdbcDriver = "jdbc:mysql://localhost:3306/jspdb?"+
								"useUnicode=true&characterEncoding=utf8&"+
								"serverTimezone=UTC";
			String dbUser = "root";
			String dbPass = "1234";

			//������ ����
			conn = DriverManager.getConnection(jdbcDriver,dbUser,dbPass);
			//������ ���� ���� ��ü ����(������ ���� �غ�)
			stmt = conn.createStatement();
			int i = stmt.executeUpdate(strQuery);	//db�� ��������
			if(i==1) //����(insert ������ ����޴� �÷��� 1���ϱ�!!!)
			{
				System.out.println("����");
				response.sendRedirect("joinResult.jsp");
			}
			else
			{
				System.out.println("����");
				response.sendRedirect("join.html");
			}
		
		} catch(Exception e) {
			e.printStackTrace();
		} finally {	//DB ȣ���ϰ� ������ �������� ������ �ݾ���� ��
			try {	//�׷��� �ٸ� ����ڵ鵵 ���� �ٽ� �� �� �ִ�
				stmt.close();
				conn.close();
			} catch (Exception e2) {
				e2.printStackTrace();	//���� x
			}			
		}
	}
}









