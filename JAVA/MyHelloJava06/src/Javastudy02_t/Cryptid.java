package Javastudy02_t;

public abstract class Cryptid extends Animal implements Fliable, Runsable {
							//상속받음			//인터페이스를 가져옴
	//Cryptid가 추상클래스이므로
	//상속받는 클래스는 Cryptid에 있는 메소드들 모두 구현해야 함
	//Cryptid를 상속받는 클래스는 메소드들을 무조건 구현해야

	@Override
	public void Run() {
		
	}

	@Override
	public void jog() {
		// TODO Auto-generated method stub

	}

	@Override
	public void Fly() {
		// TODO Auto-generated method stub

	}

	@Override
	public void FlapWing() {
		// TODO Auto-generated method stub

	}

	@Override
	public void sleep() {
		// TODO Auto-generated method stub

	}

}
