<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%! int age; %>

<%
	String str = request.getParameter("age");
	age = Integer.parseInt(str);
%>

미성년자입니다.
나이는 <%= age %>살입니다.

</body>
</html>