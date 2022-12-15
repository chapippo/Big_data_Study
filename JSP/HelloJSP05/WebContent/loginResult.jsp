<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<%-- LogInOk -> 2-2-1) --%>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>

<style>
.man {color:blue}
.woman {color:hotpink}
</style>

</head>
<body>
<!-- 변수선언 -->
<%! String Name, Id, Gender; %>

<%
	Id = (String)session.getAttribute("id");
	Name = (String)session.getAttribute("name");
	Gender = (String)session.getAttribute("gender");
%>

<h1 class=<%=Gender %>><%=Name %></h1>
<h1 class=<%=Gender %>><%=Id %></h1>
<h1 class=<%=Gender %>><%=Gender %></h1>


</body>
</html>














