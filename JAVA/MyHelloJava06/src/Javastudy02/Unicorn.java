package Javastudy02;

public class Unicorn extends Animal implements Fliable, Runsable {

	public Unicorn(String name, int age) {
		super(name, age);
	}

	@Override
	public void Run() {
		System.out.println("유니콘의 달리기");
	}

	@Override
	public void Jog() {
		return;
	}

	@Override
	public void Fly() {
		System.out.println("유니콘의 날기");
	}

	@Override
	public void FlapWing() {
		System.out.println("유니콘의 날개를 접었다 펴기");
	}

}
