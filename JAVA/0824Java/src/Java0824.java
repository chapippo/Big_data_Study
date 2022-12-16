import java.util.Scanner;

// 상속이라는 것은, 상위 클래스의 멤버를 하위 클래스가 복붙해서 자신의 것으로 만듦
class A{	// A의 멤버 변수 : n1
	private int n1;
	public A(int a) {		//생성자 하나 만들기
		this.n1=a;
		//생성자 안에선 초기화 문장 말고도 다른 명령문 정의 가능
		System.out.println("클래스 A의 멤버 n1 값 저장 완료");
		System.out.println("저장된 n1의 값 : "+this.n1);
	}
	public void print(String s) {
		System.out.println(s+"의 n1의 값: "+this.n1);
	}
}

class B extends A{	// B의 멤버 변수 : n1, n2
	// private int n1가 포함되어있음
	private int n2;
	
	// super() : 부모 클래스의 생성자를 호출해서 실행
	public B(int a, int b) {
		super(a);	//n1의 값을 설정
		this.n2=b;	//초기화 @@
		//생성자 안에선 초기화 문장 말고도 다른 명령문 정의 가능
		System.out.println("클래스 B의 멤버 n2 값 저장 완료");
		System.out.println("저장된 n2의 값 : "+this.n2);
	}
	public void print(String s) {
		System.out.println(s+"의 n2의 값: "+this.n2);		
	}	// 자기 자신에서 정의한 것을 우선시 함(부모 클래스의 함수보다)
}

public class Java0824 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int i=s.nextInt();
		A a=new A(i);	//클래스 A에 관한 객체 생성
		
		int j=s.nextInt();
		int k=s.nextInt();
		B b=new B(j,k);	//클래스 B에 관한 객체 생성
		
		// 오버라이딩 : 부모 클래스의 함수를 자식 클래스에서 다시 정의
		// 부모 클래스와 자식 클래스에 동일한 이름의 함수 있어도 정상 작동
		// 자식 클래스의 객체는 부모 클래스의 함수를 실행하지 X
		// 결론적으로, 자식 클래스 입장에선 "덮어쓰기"한 함수 사용
		System.out.println();
		a.print("a");	//A 클래스에 대한 print() 실행
		b.print("b");	//B 클래스에 대한 print() 실행
					//A 클래스에 대한 print()함수는 무시하며 실행X (덮어쓰기)
					//부모 클래스의 함수보다 자기 자신의 함수를 우선시
	}
}








