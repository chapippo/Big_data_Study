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
			Date now = new Date();	//지금 시간 (new Date)
			
			SimpleDateFormat formatter = new SimpleDateFormat("yyyy");	//네자릿수 연도만 나오게 하는 것
			//올해를 스트링으로 바꾼 것 ,, 2022라는 문자열이 나온다.			
			String NowYear = formatter.format(now);	//2022가 나옴
			
			int age = Integer.parseInt(NowYear)-year+1;
			
			if(age>=20)
				response.sendRedirect("pass.jsp?age="+age);
											//'?' 뒤는 파라미터
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
























