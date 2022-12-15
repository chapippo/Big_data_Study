package Javastudy07_05;
//인터페이스 생성시  인터페이스명+able 같이 끝에 able을 붙임
//특정한 기능을 구현하라고 '명시적'으로 알려주는 것
// (추상클래스는 좀 간접적이다..@@)

// 인터페이스
// 1. 특정 기능을 구현하도록 명시적으로 강제하고 있음
// 2. 다중 상속이 가능함
// 3. 인터페이스끼리 상속도 됨

//특정한 메소드를 구현하기 위한 규약

public interface Animalable {
	
	public void Move();
	public void Run();
	public void Charming();
}
