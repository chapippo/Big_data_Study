package Javastudy01;

public class FishAndChips extends Food_sol{

	public FishAndChips(String name, int price) {
		super(name, price);
	}
	
	@Override
	public void eat() {
		super.eat();	//조상클래스에 있는 거 그대로 가져옴
		System.out.println("영국음식이야 먹어.");
	}

}
