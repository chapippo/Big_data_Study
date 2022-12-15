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
Cookie[] cookies = request.getCookies();
for(int i = 0; i<cookies.length; i++) {
	String id = cookies[i].getValue();
	System.out.println(id);
	if(id.equals("aaa"))	//로그인 성공 직후에는 다시들어가도 id정보가 있다, 시간좀 지나고 들어가면 쿠키는 60초 뒤에 사라짐
		out.println("안녕하세요!!");
}
%>
</body>
</html>