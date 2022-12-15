<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<!-- 2-2) -->
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<!-- 변수선언 -->
<%! String Name, Phone, Gender, Hobby; %>
<%
	Name = (String)session.getAttribute("name");
	Phone = (String)session.getAttribute("phone");
	Gender = (String)session.getAttribute("gender");
	Hobby = (String)session.getAttribute("hobby");
%>

<%=Name %>
${Name }
<%=Phone %>
<h1>${Gender }</h1>
<h1><%=Gender %></h1>
<h2><%=Hobby %></h2>

<a href="modify.jsp">회원정보 수정</a>
</body>
</html>














