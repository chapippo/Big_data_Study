package Javastudy02;

public class Unicorn extends Animal implements Fliable, Runsable {

	public Unicorn(String name, int age) {
		super(name, age);
	}

	@Override
	public void Run() {
		System.out.println("�������� �޸���");
	}

	@Override
	public void Jog() {
		return;
	}

	@Override
	public void Fly() {
		System.out.println("�������� ����");
	}

	@Override
	public void FlapWing() {
		System.out.println("�������� ������ ������ ���");
	}

}
