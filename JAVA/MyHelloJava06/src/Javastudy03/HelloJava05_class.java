package Javastudy03;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava05_class extends Student {

	public static void main(String[] args) {	
		Scanner s = new Scanner(System.in);
		int age1 = 0;
		try {
			String a1 = s.nextLine();
			String n1 = s.nextLine();
//			Student s1 = new Student(a1,n1);
			Student s2 = new Student();
			Student s3 = new Student();
			
			
			ArrayList<Student> StuList = new ArrayList<Student>();
//			StuList.add(s1);
			StuList.add(s2);
			StuList.add(s3);
			
			
		} catch (Exception e) {
			age1=0;
			System.out.println("나이는 0보다 작을 수 없다.");
			e.printStackTrace();
		}

	}

}
