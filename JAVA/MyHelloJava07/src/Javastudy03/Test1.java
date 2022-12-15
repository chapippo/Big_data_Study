package Javastudy03;

import java.util.Scanner;

public class Test1 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		//1. 3에서 8사이의 숫자 중 홀수만 더하기
		int sum = 0;
		for(int i =3; i<=8; i++) {
			if(i%2==1) {
				sum += i ;
			}
		}
		System.out.println(sum);
		
		//2
		System.out.println("뒤집고 싶은 문자열 입력하세요.");
		String str = s.nextLine();
		
		for(int i = str.length()-1; i>=0; i--) {
			System.out.print(str.charAt(i));
		}
		System.out.println();
		
		//3
		System.out.println("bit로 출력되는 byte를 입력하세요.");
		int num = s.nextInt();
		System.out.println(num*8+"byte");
		
		
		
		s.close();

	}
}

















