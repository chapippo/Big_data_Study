package com.javalec.daodto;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;

//DB연결
//1-2-1)

public class MemberDAO {
	private String url = "jdbc:mysql://localhost:3306/jspdb?"+
						"useUnicode=true&characterEncoding=utf8&"+
						"serverTimezone=UTC";
	private String uid = "root";
	private String upw = "1234";
	
	private Connection conn = null;
	private Statement stmt = null;
	private ResultSet rs = null;
	private PreparedStatement pstmt = null;
	
	public MemberDAO() {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");	//jar에 있는 db 연결 소스 참조한 것
		} catch (Exception e1) {
			e1.printStackTrace();
		}
	}
	
	
	//HelloJSP04 실습03 memberSelect.jsp 만들 때 작성
	public ArrayList<MemberDTO> memberSelect() {
		ArrayList<MemberDTO> dtos = new ArrayList<MemberDTO>();
		conn = null;
		stmt = null;
		try {
			conn = DriverManager.getConnection(url,uid,upw);
			stmt = conn.createStatement();
			rs = stmt.executeQuery("select * from memberdto");
			
			while(rs.next()) {
				MemberDTO dto = new MemberDTO();
				dto.setName(rs.getString("name"));
				dto.setId(rs.getString("id"));
				dto.setPw(rs.getString("pw"));
				dto.setGender(rs.getString("gender"));
				dtos.add(dto);
			}
		} catch (Exception e) {
			e.printStackTrace(); //혹시 모를 에러 출력
		} finally {
			try {
				rs.close();
				stmt.close();
				conn.close();//내가 조회할때마다 이부분을 해줘야
			} catch (Exception e2) {
				// TODO: handle exception
				e2.printStackTrace();
			}
		}
		return dtos;
	}
	
	///////////////////////////////////////////////////////////////
	// memberSelect랑 memberInsert 2개의 함수가 있다.
	
	
	public int memberInsert(MemberDTO m) {
		int result = -1;
		conn = null;
		pstmt = null;
		try {
			conn = DriverManager.getConnection(url,uid,upw);
			String query = "insert into memberDTO values(?,?,?,?)";
			pstmt = conn.prepareStatement(query);
			pstmt.setString(1, m.getName());
			pstmt.setString(2, m.getId());
			pstmt.setString(3, m.getPw());
			pstmt.setString(4, m.getGender());
			result = pstmt.executeUpdate(); //쿼리수행 성공여부

		} catch (Exception e) {
			// TODO: handle exception
		} finally {
			try {
				pstmt.close();
				conn.close();
			} catch (Exception e2) {
				// TODO: handle exception
			}
		}
		return result;
	}
	
	
	//memberdto 테이블의 값을 하나 갖고 옴. '하나'가지고 온다.
	//아이디 가지고 조회해본 다음 match로 이 아이디가 있는지 확인해보는 용도
	public MemberDTO checkMember(MemberDTO m) {	//m -> 매개변수	//MemberDTO를 서블릿에서 읽어오려면 인스턴스가 필요
		MemberDTO dto = new MemberDTO();						//조회하는 데에만 사용할 것
		conn = null;
		pstmt = null;	//preparestatement
		try {
			conn = DriverManager.getConnection(url, uid, upw);
			String query = "select * from memberdto where id=?";
			pstmt = conn.prepareStatement(query);
			pstmt.setString(1, m.getId());	//m -> 매개변수
			rs = pstmt.executeQuery();
			rs.next(); //한 줄 읽어들임
			dto.setName(rs.getString("name"));
			dto.setId(rs.getString("id"));
			dto.setPw(rs.getString("pw"));
			dto.setGender(rs.getString("gender"));	//dto 값을 set해서 (127)에서 return
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				rs.close();
				pstmt.close();
				conn.close();	//db가 잘못되더라도 close작업은 꼭 해준다
			} catch (Exception e2) {
				e2.printStackTrace(); 
			}
		}
		return dto;
	}
}
















