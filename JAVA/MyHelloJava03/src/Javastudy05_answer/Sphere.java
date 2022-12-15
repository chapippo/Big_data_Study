package Javastudy05_answer;

public class Sphere extends Javastudy02.Circle{
	//add constructor sphere
	//con
	public Sphere(int r) {
		super(r);	//Circle 클래스의 생성자를 호출한 것
		//Circle 생성자 호출시에 PI값이 정의되도록 해놨다.
		//PI = 3.14
	}
	
	public double getVolume() {
		return (4/3)*getPI()*getR()*getR()*getR();
	}
	
	//Sphere 클래스는 
	//KBStudent와는 다르게 새로운 속성을 추가하진 않았다.
	//대신에 새로운 기능을 추가했다.
		
	//protected
	//같은 패키지(=폴더)에서는 public이랑 :똑같다.
	//디폴트 접근 제한자랑 마찬가지다.
	
	//폴더가 달라지면
	//Sphere를 상속받은 클래스에서만 이걸 쓸 수 있다.
	protected String Color;
	protected void spin() 
	{
		System.out.println("빙글빙글~");
	}
}












