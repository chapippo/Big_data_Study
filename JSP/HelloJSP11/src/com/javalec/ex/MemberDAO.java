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

//DB����
//1-2-1)

public class MemberDAO {
	
	private Connection conn = null;
	private Statement stmt = null;
	private ResultSet rs = null;
	private PreparedStatement pstmt = null;
	
	private DataSource ds = null;
	//Ŀ�ؼ� Ǯ(DBCP) : DB�� ������ Connection���� �̸� ����� �ξ ���̺� ȸ���� ������ �ϴ� ��
	
	
	//�̱��� ���� @@ 1021
	//�ϳ��� �ν��Ͻ��� �����ؼ� �װŸ� ������ ��
	//�ν��Ͻ� �޼ҵ�� �ν��Ͻ� ������ ���鼭 ����� �ʿ��� ��� ������
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
	
	
	//HelloJSP04 �ǽ�03 memberSelect.jsp ���� �� �ۼ�
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
			e.printStackTrace(); //Ȥ�� �� ���� ���
		} finally {
			try {
				rs.close();
				stmt.close();
				conn.close();//���� ��ȸ�Ҷ����� �̺κ��� �����
			} catch (Exception e2) {
				// TODO: handle exception
				e2.printStackTrace();
			}
		}
		return dtos;
	}
	
	///////////////////////////////////////////////////////////////
	// memberSelect�� memberInsert 2���� �Լ��� �ִ�.
	
	
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
			result = pstmt.executeUpdate(); //�������� ��������

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
			result = pstmt.executeUpdate(); //�������� ��������

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
			result = pstmt.executeUpdate(); //�������� ��������

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
















