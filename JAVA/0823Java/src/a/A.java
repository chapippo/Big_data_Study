package a;


public class A {
	// 접근 제어자 : private, public, protected
	private int pri;
	// private 멤버는 자기 자신의 클래스 안에서만 접근 가능
	// pri 멤버 같은 경우에 A 클래스 내부에서만 접근 가능
	
	public int pub;
	// public 멤버는 어디서든 접근 가능
	// pub 멤버 같은 경우에는 A 클래스 이외의 외부에서도 접근 가능
	
	protected int pro;
	// protected 멤버는 접근 범위는 다음과 같음
	// 1. 클래스 자기 자신과 해당 클래스가 속한 패키지
	// (여기에서는 A 클래스와 a 패키지 모두 접근 가능)
	// 2. 자신의 클래스를 상속받은 클래스
	//

}
