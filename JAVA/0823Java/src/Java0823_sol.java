// 부모 클래스로 Person 클래스부터 만들기
class Person1{
	private String name;
	private int age;
	// Person1 멤버 : 이름, 나이
	
	public Person1(String n, int a) {
		this.name=n;
		this.age=a;
	}
	
	public String getName() {return this.name;}
	public int getAge() {return this.age;}
	
	public void print() {	// "오버라이딩"
		System.out.println("ㅇㅅㅇ");
	}
}

// 자식 클래스로 Student, Teacher 클래스 만들기
// (이중 상속을 지원하고 있지 않음)
class Student1 extends Person1{
	private String school;
	// Student1 멤버 : 학교이름, 이름, 나이
	
	public Student1(String n, int a, String s) {
		// super(): 이를 통해서 부모 클래스의 생성자 호출
		super(n, a);	//7줄로 전송 후 실행 //여기서 이름과 나이가 초기화됨
		this.school=s;	//학교이름의 값 초기화		
	}
	public void print() {	//학생 클래스에 대한 print()
		System.out.println("학생정보");
		System.out.println("이름: "+this.getName());
		System.out.println("나이: "+this.getAge());
		System.out.println("학교이름: "+this.school);
	}
}

class Teacher1 extends Person1{
	private String company;
	// Teacher1 멤버 : 소속, 이름, 나이
	
	public Teacher1(String n, int a, String c) {
		super(n, a);	//여기서 이름과 나이가 초기화됨
		this.company=c;	//소속 값 초기화
	}
	public void print() {	//소속 클래스에 대한 print()
		System.out.println("교사정보");
		System.out.println("이름: "+this.getName());
		System.out.println("나이: "+this.getAge());
		System.out.println("소속: "+this.company);
	}
}

public class Java0823_sol {

	public static void main(String[] args) {
		//학생과 교사의 객체를 하나씩 생성
		Student1 stu=new Student1("이유나",24,"KB");
		Teacher1 t=new Teacher1("LeeYuna",24,"KB");
		
		stu.print();
		System.out.println();
		t.print();
	}

}
