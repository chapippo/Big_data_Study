// 1. Student 클래스 생성
// 멤버 변수: 이름(String), 학번(int), 학과(String)
// 멤버 함수: 이름 반환하는 함수, 학번 반환하는 함수, 학과 반환하는 함수
// 생성자: 3개의 변수 초기화하는 생성자 (매개변수 3개)

// 2. main에서 자신의 이름, 학번, 학과 전달하여 객체 생성하기

// 3.멤버 함수 통해서 3개의 멤버 출력 수행

class Student{
	// 멤버 변수 선언부
	private String name;
	private int number;
	private String major;
	
	// 멤버 함수 선언부
	public String getName() {return this.name;}
	public int getNum() {return this.number;}
	public String getMajor() {return this.major;}
	
	// 생성자 선언부
	public Student(String n, int num, String m) {
		this.name=n;
		this.number=num;
		this.major=m;
	}
}

public class Ans_Student {
	public static void main(String args[]) {
		// 객체 생성부
		Student stu=new Student("LeeYuna", 18, "컴공");
		
		// 출력 부분
		System.out.println(stu.getName());
		System.out.println(stu.getNum());
		System.out.println(stu.getMajor());
	}
}





