package Javastudy03;

import java.util.Scanner;

public class Test1 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		//1. 3���� 8������ ���� �� Ȧ���� ���ϱ�
		int sum = 0;
		for(int i =3; i<=8; i++) {
			if(i%2==1) {
				sum += i ;
			}
		}
		System.out.println(sum);
		
		//2
		System.out.println("������ ���� ���ڿ� �Է��ϼ���.");
		String str = s.nextLine();
		
		for(int i = str.length()-1; i>=0; i--) {
			System.out.print(str.charAt(i));
		}
		System.out.println();
		
		//3
		System.out.println("bit�� ��µǴ� byte�� �Է��ϼ���.");
		int num = s.nextInt();
		System.out.println(num*8+"byte");
		
		
		
		s.close();

	}
}

















