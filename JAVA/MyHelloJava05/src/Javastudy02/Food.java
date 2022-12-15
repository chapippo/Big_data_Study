package Javastudy02;

public abstract class Food { //abstract : 추상적인
	//조상클래스임과 동시에 get,set 빼고 다른 메소드 구현하지 않고
	//상속받는 클래스들에서 메소드 구현
	//Food클래스는 인스턴스 생성 x (인스턴스 :: 구체적인 예시기 때문)
	
	private int price;
	public String name;
	
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	
	
	// 추상클래스 내에서 메소드를 정의(선언+명령문(구체화))를 하지않고
	// 선언만한다.
	// 추상클래스를 상속받은 자식클래스에서 구체화를 반드시 해야한다
	public abstract void eat();	//ex)먹는 방법은 음식마다 다르니 정해
	
}







