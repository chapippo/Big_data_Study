<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
String id,pw;
id = request.getParameter("id");
pw = request.getParameter("pw");
if(id.equals("bbb") && pw.equals("5678")) {
	session.setAttribute("id", id);	//session 객체, 2개의 값을 setAtrribute로 추가
	session.setAttribute("pw", pw);
	response.sendRedirect("welcome_session.jsp");
}
%>
</body>
</html>