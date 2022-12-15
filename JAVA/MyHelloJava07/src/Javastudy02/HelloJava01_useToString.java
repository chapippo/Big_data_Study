package Javastudy02;

public class HelloJava01_useToString {

	public static void main(String[] args) {
		Student s = new Student("이동준",34);
		System.out.println(s.getAge());
		System.out.println(s.getName());
		System.out.println(s); //컴파일러에서 자동으로 toString 붙임
		System.out.println(s.toString());
		//Javastudy02.Student@15db9742 
		// = Object 클래스에 원래 정의되어 있는 코드
		//getClass().getName()+ '@' + Integer.toHexString(hascode)
		//패키지명.클래스명@고유코드
		//변수 s가 갖는 메모리 내의 고유 코드(객체들 하나하나를 구분하기 위해 )
		Student s2 = new Student("이동준",34);
		System.out.println(s2);
	}

}
