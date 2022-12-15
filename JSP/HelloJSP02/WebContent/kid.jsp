<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%-- 서블릿에서 값을 받아와야 함 --%>
	<%=request.getAttribute("result") %>
	<h1>20살 미만입니다.</h1>
	<img src="http://img.segye.com/content/image/2022/05/03/20220503519431.jpg">
</body>
</html>