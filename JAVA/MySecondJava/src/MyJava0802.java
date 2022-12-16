import java.util.Scanner;

public class MyJava0802 {
	public static void main(String args[]) {
		//출력문 기본형 :: printf(), print(), println()
		/*
		 * System.out.printf("%s", "Hello World!"); // c언어와 비슷한 문법으로 작성 (아래와 결과 같음)
		 * System.out.print("Hello World!"); // "개행없이" 출력
		 * 
		 * System.out.printf("%s", "Hello World!\n"); // c언어와 비슷한 문법으로 작성 (아래와 결과 같음)
		 * System.out.println("Hello World!"); // "개행 포함하여" 출력
		 * 
		 * //처음에는 타자가 느린 것이 정상입니다. //계속 작성하면서 천천히 익숙해져야하는 부분이니, 타자 느리다고 너무 상심하지 마셔요 :)
		 * 
		 * 
		 * //출력문 다양하게 작성해보기 String name="LeeYuna"; int year=2022;
		 * System.out.println("Hello World, "+name+"!");
		 * System.out.println("You are learning Java with "+year);
		 * System.out.println("당신의 각오를 적어보세요."); System.out.println("퇴근하고 저녁 뭐 먹지.");
		 */		
		
		//String형
		//c언어에선 배열로 하여 문자열을 저장하였지만 자바에선 String형으로 저장할 수 있음
		char c='a';		// char형은 문자 하나만 저장 가능, 작은따옴표로 감싸야함
		String st1="a";	// string형은 문자 하나 또는 여러개 저장 가능. 단, 꼭 큰따옴표로 감싸야함
		String st2="abcdefg";		// 여러 문자 저장한 형태
		
		
		//입력문 소개
		//Scanner 필수적으로 import하고 main 내에서 선언해야함
		Scanner s=new Scanner(System.in);		//평상시엔 main 함수 최상단에 써놓는게 좋음
		
		//입력문 작성은 아래와 같음 (자료형마다 입력문 작성이 다름)
		//숫자형 입력문
		int i_int=s.nextInt();
		short s_short=s.nextShort();
		long l_long=s.nextLong();
		float f_float=s.nextFloat();
		double d_double=s.nextDouble();
		byte b_byte=s.nextByte();
		boolean b_bool=s.nextBoolean();		//참, 거짓 여부를 저장하는 타입
		
		//문자형 입력문
		char c_char=s.next().charAt(0);
		String st_string1=s.next();		//공백을 포함하지 않는 입력문 @@@
		String st_string2=s.nextLine();	//공백을 포함하는 입력문 @@@ +엔터키가 같이 포함돼서 입력됨
		
		//주의. 입력을 nextLine() 쓰기 전에 엔터키 입력받고 버리도록 하기 (아래 참고)
		String str1=s.nextLine();
		String str2=s.nextLine();
		System.out.println(str1+" "+str2);		// 이 경우엔 str1 끝부분에 엔터키가 들어가서 문제 없이 실행됨
		
		int n=s.nextInt();
		s.nextLine();		// 이게 없으면 n 입력을 마칠 시 엔터를 누르는데 이 엔터키가 str3에 들어가면서 프로그램 종료됨
							// 해당 문구로 엔터키를 입력받고 버린 뒤, str3 입력을 받도록 한다.
		String str3=s.nextLine();
		System.out.println(n+" "+str3);
		
				
		
		//int a[5];
		int a[]=new int[5];//[]배열의 크기
		//	[]배열임을 보여주고
		
		//int n;
		//scanf("%d", &n);
		//int a[n];
		int n1 = s.nextInt();
		int arr[] = new int[n1];
		
		
		// 배열 (자바)
		// 학생 수와 이들의 점수를 입력받고
		// 이들의 점수를 차례로 나열하여 출력한 뒤, 총합을 출력한다
		int num = s.nextInt(); //학생수부터 입력받음
		
		int score[] = new int [num]; //입력 받을 점수를 학생의 크기[num]만큼 받는다
		
		int sum = 0; //총합을 저장하는 변수
		for(int i = 0 ; i < num ; i++) {
			score[i] = s.nextInt();
		}
		
		for(int i = 0 ; i < num ; i++) {
			System.out.print(score[i]+ " ");
		}
		System.out.println("합계는 "+sum);
	}
}










