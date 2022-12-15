package Javastudy03;

import java.util.*;

public class HelloJava01_Gugudan {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		try {
			int n1 = Integer.parseInt(s.nextLine());
			int n2 = Integer.parseInt(s.nextLine());
			System.out.println("(3): "+n1*(n2%10));
			System.out.println("(4): "+n1*(n2%100/10));
			System.out.println("(5): "+n1*(n2/100));
			System.out.println("(6): "+n1*n2);
			
			String a1 = s.nextLine();
			String a2 = s.nextLine();
			int a1_no;
			char a1_temp = a1.charAt(2);
			a1_no = (int)(a1_temp);
//			System.out.println(a2*(a1.charAt(2)));
			
			
		} catch (Exception e) {
			// TODO: handle exception
		}
		

	}

}
