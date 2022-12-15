package Javastudy01;

public class Sushi_sol extends Food_sol{

	private String wasabiBrand;
	
	//매개변수가 있는 생성자만 있다면
	//그리고 그런 생성자가 여러 개 있다면(Food에는 2개의 생성자 있음)
	//그 생성자 중 하나라도 쓰면 된다.
	
	//조상클래스에 매개변수 없는 생성자가 없으므로
	//자손클래스는 무조건 매개변수가 있어야 함
	public Sushi_sol(String name) {
		super(name);	//Food 클래스의 생성자를 의미
	}

	
	//이 초밥의 이름뿐 아니라 가격도 알고 싶다면?
	//(alt shift s + o 로 생성)
	public Sushi_sol(String name, int price) {
		super(name, price);	//Food 클래스의 생성자를 의미
	}

	//이 초밥의 이름,가격뿐 아니라 와사비 브랜드도 알 수 있다
	public Sushi_sol(String name, int price, String wasabiBrand) {
		super(name, price);	//Food 클래스의 생성자를 의미
		this.wasabiBrand = wasabiBrand;
	}


	//alt shift s + r
	public String getWasabiBrand() {
		return wasabiBrand;
	}

	public void setWasabiBrand(String wasabiBrand) {
		this.wasabiBrand = wasabiBrand;
	}

}










