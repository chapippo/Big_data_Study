package Javastudy01;

public class FishAndChips extends Food_sol{

	public FishAndChips(String name, int price) {
		super(name, price);
	}
	
	@Override
	public void eat() {
		super.eat();	//����Ŭ������ �ִ� �� �״�� ������
		System.out.println("���������̾� �Ծ�.");
	}

}
