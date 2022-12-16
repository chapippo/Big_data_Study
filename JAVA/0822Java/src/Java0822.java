import java.util.*;

// 교사 클래스 선언하기
class Teacher {
	// 클래스 구성요소 : 필드(멤버 변수), 메소드(멤버 함수), 생성자
	// 멤버 변수 선언부
	private String name;
	private int year;
	private String gender;
	
	// 멤버 함수 선언부
	// this를 통하여 현재 객체를 참조
	public String getName() {return this.name;}
	public int getYear() {return this.year;}
	public String getGen() {return this.gender;}
	public void setName(String n) {this.name=n;}
	public void setYear(int y) {this.year=y;}
	public void setGen(String g) {this.gender=g;}
		
	// 생성자 선언부
	// (생성자 만드는 이유) 보통 생성자는 객체 생성할 시 자동으로 멤버 변수를 초기화하는 데에 사용
	// 1. 클래스 이름과 동일해야한다.
	// 2. 멤버 함수처럼 따로 호출할 수 없는 메소드이다.
	
	// 오버로딩 : 매개변수의 수와 종류가 다르다면,
	// 동일한 이름의 함수라도 함께 사용할 수 있다.
	// 보통 오버로딩은 메소드(멤버 함수)와 생성자 선언부에서 많이 사용
	public Teacher(String n, int y, String g) {	// 매개변수 3개
		// 생성자를 통해 만들어진 객체의 멤버 변수 초기화
		this.name = n; //(this를 통해)
		this.year = y;
		this.gender = g;
	}
	public Teacher(String n, String g) { //(오버로딩) 매개변수 2개
		this.name = n;
		this.year = 0;
		this.gender = g;
	}
	
}

public class Java0822 {
	public static void main(String args[]) {
		// 객체 배열 선언
		Teacher t[] = new Teacher[3];
		//(여기까지 객체 생성까지는 x, 객체를 생성할 공간이 주어짐)
		
		//객체 배열에 대한 객체 생성
		t[0] = new Teacher("이유나", "여자");	//매개변수 2개인 생성자 호출
		t[1] = new Teacher("이동준", 2, "남자");	//매개변수 3개인 생성자 호출
		t[2] = new Teacher("박준현", 3, "남자");
		
		System.out.println("교사 목록");
		for(int i=0; i<3; i++) {
			System.out.println("이름 : "+t[i].getName());
			System.out.println("경력 : "+t[i].getYear());
			System.out.println("성별 : "+t[i].getGen());
			System.out.println();
		}
		
		// 입력문 포함해서 객체 생성 및 출력하기
		// 자신의 이름, 성별만 입력받은 뒤
		// 이에 관한 객체를 생성하고 위와 같은 양식으로 출력하기
		Scanner s = new Scanner(System.in);
		//String name = s.nextLine();
		//String gender = s.nextLine();
		//System.out.println("이름 : "+name);
		//System.out.println("성별 : "+gender);
		
		Teacher tc = new Teacher(s.next(), s.next());	// 33줄 실행해야
		// 입력값을 바로 생성자의 매개변수로 사용하여 즉시 객체 생성 가능
		
		System.out.println("내 정보");
		System.out.println("이름 : "+tc.getName());
		System.out.println("경력 : "+tc.getYear());
		System.out.println("성별 : "+tc.getGen());
	}
}









