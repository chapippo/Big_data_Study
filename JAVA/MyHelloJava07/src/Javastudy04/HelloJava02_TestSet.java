package Javastudy04;

import java.util.HashSet;
import java.util.Set;

public class HelloJava02_TestSet {

	public static void main(String[] args) {
		
		// HashSet�� ��ü���� ������ hashCode�� �ƴ϶� equals �޼ҵ嵵
		// �������̵��� ����� ��
		Set<Employee> employees = new HashSet<Employee>();
		employees.add(new Employee("�ȼ���","001"));
		employees.add(new Employee("�ȼ���","001"));
		employees.add(new Employee("������","002"));
		//equals ������ ����� �ߺ����� ����� ���� @@?
		
		for (Employee employee : employees) {
			System.out.println(employee.getName());
			System.out.println(employee.getSabeon());
		}
				

	}

}










