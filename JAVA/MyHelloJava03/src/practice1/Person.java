package practice1;

public class Person {
	// private, public, protected 접근제한자가 없으면
	// default 접근제한자가 자동적으로 적용
	// <default 접근제한자 특징>
	// 같은 패키지 안에서는 어떤 클래스에서 접근가능(public처럼) 그러나
	// 다른 패키지에서는 접근이 불가능(private처럼)
	// $참고$ C#/C++에서는 자동적으로 private 적용
	String name;
	int age;
	String sNum;
	public String alias;
	//public : 아무 패키지에서도 접근이 가능
}
