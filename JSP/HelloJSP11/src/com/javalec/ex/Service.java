package com.javalec.ex;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public interface Service {
			//               �̸���(@@??) execute�̰�          �Ű������� 2����   �޼ҵ�
	public ArrayList<MemberDTO> execute (HttpServletRequest request, HttpServletResponse response);
}
