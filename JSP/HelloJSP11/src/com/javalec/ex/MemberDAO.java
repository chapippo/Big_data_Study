package com.javalec.ex;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.security.crypto.password.PasswordEncoder;

//DB연결
//1-2-1)

public class MemberDAO {
	
	private Connection conn = null;
	private Statement stmt = null;
	private ResultSet rs = null;
	private PreparedStatement pstmt = null;
	
	private DataSource ds = null;
	//커넥션 풀(DBCP) : DB에 접속할 Connection들을 미리 만들어 두어서 테이블 회전을 빠르게 하는 것
	
	
	//싱글톤 패턴 @@ 1021
	//하나의 인스턴스만 생성해서 그거만 쓰려고 함
	//인스턴스 메소드와 인스턴스 변수를 쓰면서 상속이 필요할 경우 유용함
	private static MemberDAO instance = new MemberDAO();
	public static MemberDAO getInstance() {
		return instance;
	}
	
	
	
	public MemberDAO() {
		try {
			Context ctx = new InitialContext();
			ds = (DataSource)ctx.lookup("java:comp/env/jdbc/mysql");
			
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
			//conn = DriverManager.getConnection(url,uid,upw);
			conn = ds.getConnection();
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
			conn = ds.getConnection();
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
	
	
	
	
	
	public int memberUpdate(MemberDTO m) {
		int result = -1;
		conn = null;
		pstmt = null;
		try {
			conn = ds.getConnection();
			String query = "update memberDTO set name=?, gender=?, pw=? where id=?";
			pstmt = conn.prepareStatement(query);
			pstmt.setString(1, m.getName());
			pstmt.setString(2, m.getGender());
			PasswordEncoder p = new BCryptPasswordEncoder();
			m.setPw(p.encode(m.getPw()));
			pstmt.setString(3, m.getPw());
			pstmt.setString(4, m.getId());
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
	
	
	public int memberDelete(MemberDTO m) {
		int result = -1;
		conn = null;
		pstmt = null;
		try {
			conn = ds.getConnection();
			String query = "delete from memberdto where id=?";
			pstmt = conn.prepareStatement(query);
			pstmt.setString(1, m.getId());
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
		
}
















