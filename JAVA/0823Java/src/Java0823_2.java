import java.util.Scanner;
// Person 클래스를 부모 클래스로, Student를 자식 클래스로 두기

class Person2{	
	// 사람 클래스 :: 부모 클래스, 상위 클래스
	private String name;	//이름
	//private int height;		//키
	private String gender;	//성별
	// 멤버 : 이름, 성별
	
	// ***생성자***를 만드는 이유: 위에 있는 멤버들을 초기화 하기 위함
	public Person(String n, String g) {
		this.name=n;
		this.gender=g;
	}
	
	public void setName(String n) {this.name=n;}
	public String getName() {return this.name;}
	
	public void print_P() {
		System.out.println("사람 정보");
		System.out.println("이름: "+this.name);
		System.out.println("성별: "+this.gender);
	}
}

//Person 클래스의 멤버를 복붙해서 사용하는 것
class Student2 extends Person{
	// 학생 클래스 :: 자식 클래스, 하위 클래스
	// 상속이란, 부모 클래스의 멤버를 복붙해서 사용하는 것
	private int num; 	//학번
	//private String ablity;	//학력
	// 멤버 : 학번, 이름, 성별
	
	public Student(String n, String g, int num) {
		// super() : 이 구문을 통해서 부모 클래스의 생성자 호출 o
		super(n, g);	//여기에서 부모 클래스의 멤버 초기화			super @@@@@@@
		this.num=num;	//여기선 자식 클래스 자신의 멤버 초기화
		// 멤버 3개가 초기화
	}
	
	//public은 메인에서 호출 가능 @@@@@
	public void setNum(int n) {this.num=n;}
	public int getNum() {return this.num;}
	
	public void print_S() {
		System.out.println("학생 정보");
		System.out.println("학번: "+this.num);
	}
}

public class Java0823_2 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		// 객체 생성부
		Person p = new Person("차승화", "남자");
		Student stu = new Student("이유나", "여자", 18);
		
		p.setName("cha");	// 이름 저장 : 정상 실행
		
		//Person 클래스는 Student 클래스 멤버 포함X
		//p.setNum(123432);	//학번 저장 : 비정상 실행
		
		//부모 클래스의 멤버를 복붙해서 자신의 것으로 만들었기 때문에 정상실행
		stu.setName("cha");	//이름 저장 : 정상 실행
		stu.setNum(12334);
		
		p.print_P();
		System.out.println();
		stu.print_S();
		
	}
}







