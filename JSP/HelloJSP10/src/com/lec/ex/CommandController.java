package com.lec.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class FrontController
 */

// ���� do�� ������ �� �̸��� �̵��Ѵ�
@WebServlet("*.do")
public class CommandController extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public CommandController() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		//��û uri
		String uri = request.getRequestURI();	
		
		//������Ʈ��
		String conPath = request.getContextPath();
		
		//������ �ڿ� ���� �͵�. insert.do ��
		//subsstring : �ڸ��� ��. �� conPath��ŭ �ڸ�
		String command = uri.substring(conPath.length());
		System.out.println(uri);
		System.out.println(conPath);
		System.out.println(command);
		
		
		//ExecutePrintable ex��� �ϳ��� �������̽���
		//������ ck ck ck ck ck @@@@@
		ExecutePrintable ex;
		if(command.equals("/insert.do")) {	//������ insert.do�� ������
			ex = new InsertPrint();	//InsertPrint�� �ν��Ͻ��� ����
	//�������̽� = �װ��� ������ Ŭ����
		} else if(command.equals("/test.do")) {
			ex = new TestPrint();
		} else {
			ex = new ExecutePrintable() {
				
				@Override
				public void execute() {
					// TODO Auto-generated method stub
					System.out.println(command);
				}
			};
		}
		ex.execute();
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}









