package Javastudy03;

import java.util.Scanner;

public class Sol1 {

	public static void main(String[] args) {
		//1. 3에서 8사이의 숫자 중 홀수만 더하기
		int sum = 0;
		for(int i = 3; i<=8; i++) {
			if(i%2 != 0)
				sum += i;
		}
		System.out.println(sum);
		
		//2. 문자열 입력 후 역출력하기
		Scanner s = new Scanner(System.in);
		System.out.println("문자열 입력");
		String sentence = s.nextLine();
		for(int i = sentence.length()-1; i>=0; i--)
			System.out.print(sentence.charAt(i));
		
		
		//3. 바이트 값 입력시 비트값 출력
		System.out.println("\n몇 바이트?");
		try {
			int num = s.nextInt();
			System.out.println(num+"바이트 = "+(num*8)+"비트");
		} catch (Exception e) {
			System.out.println("값 잘못 입력함");
		}
		
		
		s.close();
	}

}
