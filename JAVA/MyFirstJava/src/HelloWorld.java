//package MyFirstJava;

import java.util.Scanner;

public class HelloWorld {
	public static void main(String args[]) {
		System.out.printf("%s","Hello World");
		System.out.print("Hello World");	// "Hello World" 출력
		
		System.out.printf("%s","Hello World\n");
		System.out.println("Hello World");	// "Hello World\n" 출력
		
		String name = "Cha";
		int year = 2022;
		
		//System.out.printf("Hello World %s", name);
		System.out.println("Hello World "+ name);
		
		//System.out.printf("You are learning Java with %d", year);
		System.out.println("You are learning Java with "+ year);
		
		System.out.print("당신의 각오를 말해보세요.\n");
		
		System.out.println("퇴근하고 저녁 뭐 먹지.");
		
		Scanner s/*아무렇게 줄임*/ = new Scanner(System.in);
		//int n;
		//scanf_s("%d", &n);
		
		//입력문 종류(숫자) - 한 문장에 하나씩 입력받기
		int n_int = s.nextInt();			//int형 입력문
		short sh_short = s.nextShort();		//short형 입력문
		float f_float = s.nextFloat();		//float형 입력문
		double d_double = s.nextDouble();	//double형 입력문
		
		//입력문 종류(문자)
		char c_char = s.next().charAt(0);	//char형 입력문
		String s_st = s.next();				//string형 입력문(공백 포함X 입력문)
		String s_str = s.nextLine(); 		//string형 입력문(공백 포함O 입력문)
		
		
	}
}















