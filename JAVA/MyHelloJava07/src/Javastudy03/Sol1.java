package Javastudy03;

import java.util.Scanner;

public class Sol1 {

	public static void main(String[] args) {
		//1. 3���� 8������ ���� �� Ȧ���� ���ϱ�
		int sum = 0;
		for(int i = 3; i<=8; i++) {
			if(i%2 != 0)
				sum += i;
		}
		System.out.println(sum);
		
		//2. ���ڿ� �Է� �� ������ϱ�
		Scanner s = new Scanner(System.in);
		System.out.println("���ڿ� �Է�");
		String sentence = s.nextLine();
		for(int i = sentence.length()-1; i>=0; i--)
			System.out.print(sentence.charAt(i));
		
		
		//3. ����Ʈ �� �Է½� ��Ʈ�� ���
		System.out.println("\n�� ����Ʈ?");
		try {
			int num = s.nextInt();
			System.out.println(num+"����Ʈ = "+(num*8)+"��Ʈ");
		} catch (Exception e) {
			System.out.println("�� �߸� �Է���");
		}
		
		
		s.close();
	}

}
