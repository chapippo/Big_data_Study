package Javastudy02;

public class Bibimbab extends Food{
	
	//Food 자체는 어떻게 먹을지 정의하지 않음
	//대신 Food를 상속받으면 어떻게 먹을지 정의할 수 있다.
	//또한 !
	//음식이긴 음식인데, 어떻게 먹는지에 대해서 누락이 될수 있는데
	//Food를 추상화시키면
	
	//부모클래스(Food)에서는 메소드   함수(eat)  를 선언만하고 정의(구체화)하지 않았다.
	//부모클래스(Food)를 상속받은 자식클래스(Bibimbab) 내부에서
	//메소드(eat)를 정의(구체화)한다 !!@@@
	
	//무조건 eat은 구현해야 1011
	
	@Override
	public void eat() {
		// TODO Auto-generated method stub
		System.out.println("비벼서 먹으세요.");
	}

}
