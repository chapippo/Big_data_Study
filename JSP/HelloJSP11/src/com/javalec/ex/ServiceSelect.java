package com.javalec.ex;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class ServiceSelect implements Service {

	@Override
	public ArrayList<MemberDTO> execute(HttpServletRequest request, HttpServletResponse response) {
				//MemberDTO�� �ִ� ���� �� �о���� �� ��		
		MemberDAO m = MemberDAO.getInstance();		
		return m.memberSelect();
	}

}
