package com.javalec.ex;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public interface Service {
			//               이름이(@@??) execute이고          매개변수가 2개인   메소드
	public ArrayList<MemberDTO> execute (HttpServletRequest request, HttpServletResponse response);
}
