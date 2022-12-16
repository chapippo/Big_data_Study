import java.util.Scanner;

class Cal{
	// 멤버 변수 선언부
	private char ch;
	
	// 생성자 선언부
	// 멤버 변수 초기화 !!!!!
	public Cal(char c) {
		this.ch=c;
	}
	
	// 멤버 함수 선언부
	public char getCh() {return this.ch;}
	public int sum(int a, int b) {return a+b;}
	public int sub(int a, int b) {return a-b;}
	public int mul(int a, int b) {return a*b;}
	public int div(int a, int b) {return a/b;}
	public int rest(int a, int b) {return a%b;}
}

public class Java0823_q1 {
	public static void main(String arg[]) {
		Scanner s = new Scanner(System.in);
		Cal arr[]=new Cal[5];	// 배열 공간 만들기
		// 각 멤버 변수 ch를 초기화
		arr[0]=new Cal('+');
		arr[1]=new Cal('-');
		arr[2]=new Cal('*');
		arr[3]=new Cal('/');
		arr[4]=new Cal('%');	// 객체 생성 완료
		
		// 반복문을 사용하여 계산기 프로그램 만들기
		// 숫자 2개가 0 0 입력받을 시 반복문 종료
		// -> 무한 반복문 생성
		while(true) {
			// 숫자 2개, 연산자 순으로 입력
			int a = s.nextInt();	// 숫자 입력
			int b = s.nextInt();
			char c = s.next().charAt(0);	// 연산자 입력
			
			if(a==0 && b==0) {break;}
			 
			int result = -1; // 결과 저장하는 곳
			
			/*getCh를 불러와서/ ex)+를 입력한다면 식 만족*/
			// +일 때 덧셈 결과 저장
			if(c==arr[0].getCh()) {result=arr[0].sum(a, b);}
			// -일 때 뺄셈 결과 저장
			else if(c==arr[1].getCh()) {result=arr[1].sub(a, b);}			
			// *일 때 뺄셈 결과 저장
			else if(c==arr[2].getCh()) {result=arr[2].mul(a, b);}
			// /일 때 뺄셈 결과 저장
			else if(c==arr[3].getCh()) {result=arr[3].div(a, b);}
			// %일 때 뺄셈 결과 저장
			else if(c==arr[4].getCh()) {result=arr[4].rest(a, b);}
			// 결과 출력
			System.out.println("결과는 "+result);
			
			// 겹치는 게 없어서 if로 다 돌려도 된다
		}
	}
}











	