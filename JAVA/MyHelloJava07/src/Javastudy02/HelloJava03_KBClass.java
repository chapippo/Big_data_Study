package Javastudy02;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava03_KBClass {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("��� �Է�?");
		int p = Integer.parseInt(s.nextLine());
		ArrayList<KBStudent> Students = new ArrayList<KBStudent>();		
		try {
			for(int i=0; i<p; i++)
			{
				System.out.println("�̸��Է�");
				String name = s.nextLine();
				System.out.println("�����Է�");
				String gender = s.nextLine();
				System.out.println("�����Է�");
				int age = Integer.parseInt(s.nextLine());
				System.out.println("��ȣ�Է�");
				int number = Integer.parseInt(s.nextLine());
				KBStudent ss = new KBStudent(name, gender, age, number);
				
//				System.out.println(number.equals());
				System.out.println(ss.toString());
			}
			
		} catch (Exception e) {
			System.out.println("�ߺ�");
			e.printStackTrace();
		}

	}

}
