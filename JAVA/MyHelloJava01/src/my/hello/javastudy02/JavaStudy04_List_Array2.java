package my.hello.javastudy02;

import java.util.*;

public class JavaStudy04_List_Array2 {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		System.out.println("몇명 관리할까요?");
		int count = s.nextInt();
		
		s.nextLine();
		Tourist[] tourist_arr = new Tourist[count];
		
		for(int i = 0; i<count; i++) {
			System.out.println("이름은?");
			String name = s.nextLine();
			System.out.println("나이는?");
			int age = s.nextInt();
			System.out.println("번호는?");
			int beonho = s.nextInt();
			
			s.nextLine();
			
			System.out.println("주민번호는?");
			String sNum = s.nextLine();
			
			tourist_arr[i] = new Tourist(name,age,beonho,sNum);
		}
		
		for (Tourist tourist : tourist_arr) {
			System.out.println(tourist.getName());
			System.out.println(tourist.getAge());
			System.out.println(tourist.getBeonho());
			System.out.println(tourist.getsNum());
		}
		
		
		

	}

}
