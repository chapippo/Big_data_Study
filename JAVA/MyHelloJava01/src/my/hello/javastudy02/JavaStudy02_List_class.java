package my.hello.javastudy02;

import java.util.ArrayList;

public class JavaStudy02_List_class {

	public static void main(String[] args) {
		//배열, List 모두 숫자만 저장하거나, 문자열만 저장하는 거 말고
		//객체를 저장하는 것도 된다@@@ 							객체를 저장하는 배열
		Student[] students = new Student[3];
		students[0] = new Student();
		//		new 키워드 + 생성자(Student)   만 있으면 넣기 가능
		//               + 클래스명은 반드시 들어가야
		
		students[1] = new Student("이진용",22,1);
		Student s = new Student("김진혁",30,2);
		students[2] = s;

		//new 키워드 의미 
		//Heap 영역에 메모리 생성하겠다
		
		//int나 double 등으로 변수 선언할 때랑은 다르다.
		//1. new키워드 + 생성자가 있어야지만 객체 생성됨
		//2. 생성자 안에 경우에 따라선 매개변수가 들어가기도 함
		//													객체를 저장하는 ArrayList
		ArrayList<Student> mystudents = new ArrayList<Student>();
		
		mystudents.add(new Student("조광래",60,5));
		mystudents.add(new Student());						//클래스 이용해서 만든 변수를 '객체'라고 부름
		Student ss = new Student("최원권",45,4);	//ss라는 객체 생성(변수를 (생성해)이용해) 넣을 수도 있음
		//추상적			구체화
					//new 키워드 이용해서 대입
		//참조자???@@
		// ss자체가 값을 저장하는 거 xxx 메모리 공간 어딘가에 할당 ooo
		
		
		
		
		mystudents.add(ss);		//생성자:컴퓨터 메모리에 생성하니까, 위에 ()안도 생성자
		
		
		//new 키워드 + 생성자
		//인스턴스(Instance)라고 부름!
		//Instance : (구체적)예시
		//Student의 Instance = Student의 예시
		//= 학생이라는 추상적 개념을 구체적인 예시로 보여준 것
		
		
		
		
		int ex; //ex에 기본적으로 숫자 0이 들어감
		//s0이랑 s1은 아무것도 가리키지 않음
		//즉 null값이다.
		Student s0;
		Student s1 = null;	//추상화 된 게 구체화 되지 않음 !!
		mystudents.add(s1);
		students[0] = s1;
		
	}
}









