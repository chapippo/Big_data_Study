package Javastudy03;

import java.util.Scanner;

public class HelloJava03_StringNum {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("ù��° ����?");
		String num1 = s.nextLine();
		System.out.println("�ι�° ����?");
		String num2 = s.nextLine();
		
		//toCharArray�� �迭������ ���� ���
		//CharAt�� ���� ��찡 �ִ�.
		//�׸��� �ƽ�Ű�ڵ��̱� ������ ���� '0'�� ���� ���ڸ� ���ϰų�
		//Character.getNumericvalue
		
		int n1 = 0;
		int n2 = 0;
		try {
			n1 = Integer.parseInt(num1);
			n2 = Integer.parseInt(num2);
			System.out.println(n1 * (num2.charAt(2)-'0'));
			System.out.println(n1 * (num2.charAt(1)-'0'));
			System.out.println(n1 * (num2.charAt(0)-'0'));
			System.out.println(n1 * n2);
		} catch (Exception e) {
			//����ó��
			n1 = 0;
			System.out.println("���� ����!");
			e.printStackTrace();//���� �޽��� ��� ���� ��
		}
		System.out.println("���α׷��� �����մϴ�.");
	
	}
}





