package com.javalec.daodto;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;

//DB����
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
			Class.forName("com.mysql.cj.jdbc.Driver");	//jar�� �ִ� db ���� �ҽ� ������ ��
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
			conn = DriverManager.getConnection(url,uid,upw);
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
	
	
	//memberdto ���̺��� ���� �ϳ� ���� ��. '�ϳ�'������ �´�.
	//���̵� ������ ��ȸ�غ� ���� match�� �� ���̵� �ִ��� Ȯ���غ��� �뵵
	public MemberDTO checkMember(MemberDTO m) {	//m -> �Ű�����	//MemberDTO�� �������� �о������ �ν��Ͻ��� �ʿ�
		MemberDTO dto = new MemberDTO();						//��ȸ�ϴ� ������ ����� ��
		conn = null;
		pstmt = null;	//preparestatement
		try {
			conn = DriverManager.getConnection(url, uid, upw);
			String query = "select * from memberdto where id=?";
			pstmt = conn.prepareStatement(query);
			pstmt.setString(1, m.getId());	//m -> �Ű�����
			rs = pstmt.executeQuery();
			rs.next(); //�� �� �о����
			dto.setName(rs.getString("name"));
			dto.setId(rs.getString("id"));
			dto.setPw(rs.getString("pw"));
			dto.setGender(rs.getString("gender"));	//dto ���� set�ؼ� (127)���� return
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				rs.close();
				pstmt.close();
				conn.close();	//db�� �߸��Ǵ��� close�۾��� �� ���ش�
			} catch (Exception e2) {
				e2.printStackTrace(); 
			}
		}
		return dto;
	}
}
















