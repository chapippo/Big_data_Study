package Javastudy04;

import java.util.HashSet;
import java.util.Set;

public class HelloJava02_TestSet {

	public static void main(String[] args) {
		
		// HashSet을 객체에서 쓰려면 hashCode뿐 아니라 equals 메소드도
		// 오버라이딩을 해줘야 함
		Set<Employee> employees = new HashSet<Employee>();
		employees.add(new Employee("안서준","001"));
		employees.add(new Employee("안서준","001"));
		employees.add(new Employee("이현민","002"));
		//equals 재정의 해줘야 중복없이 제대로 동작 @@?
		
		for (Employee employee : employees) {
			System.out.println(employee.getName());
			System.out.println(employee.getSabeon());
		}
				

	}

}










