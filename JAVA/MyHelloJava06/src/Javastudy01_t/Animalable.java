package Javastudy01_t;

public interface Animalable {
	public void charming();
	//이 메소드는 반드시 구현해야 함
	
	//default를 쓰면 구현하지 않아도 된다.
	
	//(인터페이스는 특정한 메소드를 구현해야 하는 건 맞다
	//다만, 규칙을 부여할 필요가 있나 싶을 때는 default를 붙여줌. @@@)
	//default를 쓰면 굳이 해당 메소드를 구현하지 않아도 된다.
	public default void sleep() {
		System.out.println("잠을 잡니다.");
	}
	//public을 쓰면 Animalable을 상속하는 클래스들은 다 사용가능
	//public을 지우게 된다면?? @@@
}
