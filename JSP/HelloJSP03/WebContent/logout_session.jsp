<%@page import="java.util.Enumeration"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<!-- setAttribute해서 id session 2개 만들었는데 삭제해볼것임 -->
<%
	Enumeration enu = session.getAttributeNames();
	while(enu.hasMoreElements()) {
		String sName = enu.nextElement().toString();
		String sValue = (String)session.getAttribute(sName);
		System.out.println(sName);
		System.out.println(sValue);
		if(sValue.equals("bbb"))
			session.removeAttribute(sName);	//id 지워버림
	}
%>
<!-- a[href] 탭탭 -->
<a href="session_test.jsp">세션 제거 테스트 페이지</a>
</body>
</html>








