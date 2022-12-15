package Javastudy02;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava03_KBClass {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("몇명 입력?");
		int p = Integer.parseInt(s.nextLine());
		ArrayList<KBStudent> Students = new ArrayList<KBStudent>();		
		try {
			for(int i=0; i<p; i++)
			{
				System.out.println("이름입력");
				String name = s.nextLine();
				System.out.println("성별입력");
				String gender = s.nextLine();
				System.out.println("나이입력");
				int age = Integer.parseInt(s.nextLine());
				System.out.println("번호입력");
				int number = Integer.parseInt(s.nextLine());
				KBStudent ss = new KBStudent(name, gender, age, number);
				
//				System.out.println(number.equals());
				System.out.println(ss.toString());
			}
			
		} catch (Exception e) {
			System.out.println("중복");
			e.printStackTrace();
		}

	}

}
