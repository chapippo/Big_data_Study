package mytest1017;

import java.io.IOException;
import java.net.URLEncoder;
import java.text.SimpleDateFormat;
import java.util.Date;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class AgeCheck
 */
@WebServlet("/RequestResponse")
public class RequestResponse extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public RequestResponse() {
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
	
	public void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		//response.setContentType("text/html;charset=UTF-8");
		String str = request.getParameter("birth");
		try {
			int year = Integer.parseInt(str);
			Date now = new Date();	//���� �ð� (new Date)
			
			SimpleDateFormat formatter = new SimpleDateFormat("yyyy");	//���ڸ��� ������ ������ �ϴ� ��
			//���ظ� ��Ʈ������ �ٲ� �� ,, 2022��� ���ڿ��� ���´�.			
			String NowYear = formatter.format(now);	//2022�� ����
			
			int age = Integer.parseInt(NowYear)-year+1;
			
			if(age>=20)
				response.sendRedirect("pass.jsp?age="+age);
											//'?' �ڴ� �Ķ����
			else
				response.sendRedirect("ng.jsp?age="+age);
		
		} catch (Exception e) {
			//response.setContentType("text/html;charset=UTF-8");
			//request.setCharacterEncoding("UTF-8");
			System.out.println(str+"@@@");
			str = URLEncoder.encode(str, "UTF-8");
			response.sendRedirect("fail.jsp?birth="+str);
		}	
		
	}

}
























