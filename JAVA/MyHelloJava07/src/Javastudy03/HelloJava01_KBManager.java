package Javastudy03;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class HelloJava01_KBManager {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int count = 0;
		System.out.println("몇명 입력?");
		try {
			count = Integer.parseInt(s.nextLine());
			if(count<=0)
				throw new Exception("길이가 0 이하일 수 없다.");
		} catch (Exception e) {
			System.out.println("숫자 입력 잘못됨. "+e.getMessage());
			return;
		} finally {
			//프로그램이 종료되도 무조건 실행을 함
			if(count<=0)
				System.out.println("프로그램을 재시작해주세요");
		}
		
		List<KBStudent> students = new ArrayList<KBStudent>();
		
		for(int i = 0; i<count; i++)
		{
			String name = "";
			String gender = "";
			int age = 0;
			int number = 0;
			System.out.println("이름은?");
			name=s.nextLine();
			System.out.println("성별은?");
			gender=s.nextLine();
			try {
				System.out.println("나이?");
				age = Integer.parseInt(s.nextLine());
				System.out.println("번호?");
				number = Integer.parseInt(s.nextLine());				
				if(age<=0)
				{					
					System.out.println("나이 값이 잘못되었습니다.");
					age = 0;
					//나이가 0이나 음수인 경우에 age를 0으로 바꿈
				}
			} catch (Exception e) {
				e.printStackTrace();	//오류출력은 하고 프로그램은 계속 됨
			}
			
			
			KBStudent k = new KBStudent(name, gender, age, number);
			
			if(students.contains(k)) {
				System.out.println("중복!");
				i--;
				continue;
			}
			students.add(k);	//중복이 아닌 경우에 students에 add
		}
		for (KBStudent kbStudent : students) {
			System.out.println(kbStudent);
		}
											 //(Comparable이라는 인스턴스를)
		Collections.sort(students);	//implements Comparable<KBStudent>를 구현하고 있어야 함		
				
		System.out.println("---나이순 출력(오름차순)---");
		for (KBStudent kbStudent : students) {
			System.out.println(kbStudent);
		}
		
		
		//번호순 정렬
		Collections.sort(students, new Comparator<KBStudent>() {

			@Override
			public int compare(KBStudent o1, KBStudent o2) {
				return o1.getNumber()-o2.getNumber();
			}			
		});
		
		System.out.println("---번호순 출력(오름차순)---");
		for (KBStudent kbStudent : students) {
			System.out.println(kbStudent.toString());
		}
	}
}
























