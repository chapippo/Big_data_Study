package com.javalec.ex;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class ServiceSelect implements Service {

	@Override
	public ArrayList<MemberDTO> execute(HttpServletRequest request, HttpServletResponse response) {
				//MemberDTO에 있는 값을 다 읽어오는 것 뿐		
		MemberDAO m = MemberDAO.getInstance();		
		return m.memberSelect();
	}

}
