<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<!-- 이건 보임 ! -->
	<%-- JSP용 주석 (html용 주석이랑은 다르게 클라이언트 단에서 안 보임) --%>
	<%-- method를 생략하거나 method="get"이라고 하면 주소창에 name값이 보임 --%>
	<%-- 하지만 method="post"라고 적으면 name값이 안 보임 (보안쪽은 method를 post로 둔다)--%>
<form action="HiWorld" method="post">
	<input type="text" name="hi">
	<input type="submit" value="전송">
</form>

<form action="ByeWorld" method="post">
	<input type="text" name="bye">
	<input type="submit" value="전송">
</form>

</body>
</html>







