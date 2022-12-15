package Javastudy01_t;

public class Pikachu implements Animalable, Cloneable {
	
	
	//인터페이스 Cloneable 적고, 그 다음에 clone 오버라이딩 하기
	//다른 패키지에서도 모두 활용하려면 protected를 모두 public으로 바꿔야 함
	//Cloneable의 clone 메소드는 이미 default로 구현되어 있으나
	//오버라이딩을 해야 쓸 수 있다.
	@Override
	/*protected*/ public Object clone() throws CloneNotSupportedException {
		return super.clone();
	}
	
	
	
	private String Name;	//개체별로 트레이너가 부르는 이름
	
	//getter setter
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}	

	//생성자
	public Pikachu(String name) {
		super();
		Name = name;
	}

	//인터페이스에 의한 메소드 구현
	@Override
	public void charming() {
		System.out.println("피카피카~");
	}

}
