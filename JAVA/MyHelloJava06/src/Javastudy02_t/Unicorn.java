package Javastudy02_t;

//Cryptid를 상속받음
//환상종(=상상의 동물)이라는 별도의 클래스를 상속받음
public class Unicorn extends Cryptid implements Fliable, Runsable {

	//유니콘 색깔 추가
	private String Color;	
	public String getColor() {
		return Color;
	}
	public void setColor(String color) {
		Color = color;
	}
	
	public void cry() {
		System.out.println(Color+"빛 털을 흩날리며,");
		System.out.println("히히히히힝~(유니콘의 목소리로)");
	}
	
	
	//하단 5개의 오버라이딩 된 메소드들은 필수
	@Override
	public void Run() {
		System.out.println("멋지게 달립니다.");
	}
	@Override
	public void jog() {
		System.out.println("총총총");
	}
	@Override
	public void Fly() {
		System.out.println("우아하게 난다.");
	}
	@Override
	public void FlapWing() {
		System.out.println("우아하게 퍼덕거린다.");
	}
	@Override
	public void sleep() {
		System.out.println("영물은 잠들지 않는다.");
	}
}
