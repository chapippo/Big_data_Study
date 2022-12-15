<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<form action="CheckInfo">	<!-- CheckInfo라는 서블릿에 넘겨줌 -->
	<!-- type은 꼭 안 써줘도 되지만 추후에 style줄 때를 고려해서 작성 -->
		<label for="name">이름: </label>
		<input type="text" id="name" name="name"><br>
		<label for="age">나이: </label>
		<input type="text" id="age" name="age"><br>
		<label for="id">ID: </label>
		<input type="text" id="id" name="id"><br>
		<input type="submit" value="정보제출">		
		
		<!-- 다 작성후 CheckInfo라는 서블릿 생성 후 이동 -->
	</form>
</body>
</html>

