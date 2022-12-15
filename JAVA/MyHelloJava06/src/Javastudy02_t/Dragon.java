package Javastudy02_t;


//Cryptid를 상속받음
//환상종(=상상의 동물)이라는 별도의 클래스를 상속받음
public class Dragon extends Cryptid implements Fliable, Runsable {

	// 종
	private String species;	
	public String getSpecies() {
		return species;
	}
	public void setSpecies(String species) {
		this.species = species;
	}

	@Override
	public void Run() {
		System.out.println("드래곤은 뛰지 않는다..");		
	}
	@Override
	public void jog() {
		System.out.println("드래곤은 조깅 안한다..");		
	}
	@Override
	public void Fly() {
		System.out.println("드래곤의 날기");		
	}
	@Override
	public void FlapWing() {
		System.out.println("변신해서 날개 없다.");		
	}
	@Override
	public void sleep() {
		System.out.println("드래곤은 자는데 깨우면 안된다.");		
	}
	
	
	public void polymorph() {
		System.out.println(species+" 드래곤의 변신!");
	}
}












