package Javastudy04;

import java.util.*;

public class HelloJava01_Circle {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Circle c1 = new Circle();	//������ �ִ� Circle �����ڰ� �ҷ�����
//		c1.setR(3);
		System.out.println("�������� ���� �Է��ϼ���");
		int r1 = s.nextInt();
		c1.setR(r1);
		System.out.println(c1.getArea());
		System.out.println(c1.getRound());
		
		
		Circle c2 = new Circle();	//ó�� ��������� ������ ���� �� ���� ������ 
		c2.setR(-3);
		System.out.println(c2.getArea());
		System.out.println(c2.getRound());
		
		if(c2.getArea() != 0) {
			System.out.println(c2.getArea());
		}
		else {
			System.out.println("c2 ������ Ȯ�� �ٽ��ؿ�.");
		}
		
		
		
		
		//�����ε� @@@
		//���� �����ڸ��� ���� ���� ���� �� �ִ�.
		Circle m1 = new Circle(4);
		if(m1.getArea() != 0)
			System.out.println(m1.getArea());
		System.out.println(new Circle(5).getArea());
		// ���� * getRound ���� ��, 00002 �̷��� ���� ��
		//�����Ҽ���(�Ҽ��� ����)��
		//�ε��Ҽ���(�Ҽ����� ������ �ƴ�) �̽� ����,
		//������ ���迡�� �Ǽ��� �Ϻ��ϰ� ǥ���� �� ����
		//�׿� ���� ���� ������ ���� ������.

	}

}
