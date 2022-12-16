import java.util.Scanner;

// 두 클래스를 상속 관계로 포함
class Point{	// 부모 클래스
	//위치 정보 포함(x좌표, y좌표)
	private int x;
	private int y;	//private은 설령 자기 자신을 상속한 클래스라도 작동 X
	
	public Point(int a, int b) {	// 멤버 변수 초기화 (Point 생성자)
		this.x=a;
		this.y=b;
	}
	
	// x좌표와 y좌표의 값을 반환하는 get() 함수
	public int getX() {return this.x;}
	public int getY() {return this.y;}
	
	public void print() {
		//Point 클래스의 객체에 의해 호출될 때 실행됨
		//x좌표와 y좌표의 위치 정보 출력
		System.out.println("Point의 좌표 : ("+this.x+", "+this.y+")");
	}
}

class ColorPoint extends Point{	// 자식 클래스
	// 위치 정보, 색상 포함(x/y좌표, 색상)
	private String color;
	
	public ColorPoint(int a, int b, String s) {	// 멤버 변수 초기화
		super(a,b);	// 부모 클래스의 생성자 통해 위치 정보 초기화
		this.color=s;
	}
	 
	public void print() {
		//ColorPoint 클래스의 객체에 의해 호출될 때 실행됨
		// < 오버라이딩 발생 >
		//부모 클래스의 함수 중 형태가 같은 함수가 있을 시
		//자신의 클래스에 있는 함수를 우선시하여 실행함
		System.out.println("ColorPoint의 좌표 : ("+this.getX()+", "+this.getY()+", "+this.color+")");
	}
}


public class Java0824_q1 {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		
		// 객체 2개를 생성
		
		int a=s.nextInt();	// p1 객체 생성 위한 x좌표 입력
		int b=s.nextInt();	// p1 객체 생성 위한 y좌표 입력
		// Point 클래스의 p1 생성
		Point p1=new Point(a,b);
		
		int a2=s.nextInt();	// p2 객체 생성 위한 x좌표 입력
		int b2=s.nextInt();	// p2 객체 생성 위한 y좌표 입력
		String color=s.next();	// p2 객체 생성 위한 색상 입력
		//ColorPoint 클래스의 p2 생성
		ColorPoint p2=new ColorPoint(a2,b2,color);
		
		System.out.println();
		
		p1.print();	// Point 클래스의 print()가 실행
		p2.print();	// ColorPoint 클래스의 print()가 실행
	}
}









