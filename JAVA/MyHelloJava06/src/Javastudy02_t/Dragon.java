package Javastudy02_t;


//Cryptid�� ��ӹ���
//ȯ����(=����� ����)�̶�� ������ Ŭ������ ��ӹ���
public class Dragon extends Cryptid implements Fliable, Runsable {

	// ��
	private String species;	
	public String getSpecies() {
		return species;
	}
	public void setSpecies(String species) {
		this.species = species;
	}

	@Override
	public void Run() {
		System.out.println("�巡���� ���� �ʴ´�..");		
	}
	@Override
	public void jog() {
		System.out.println("�巡���� ���� ���Ѵ�..");		
	}
	@Override
	public void Fly() {
		System.out.println("�巡���� ����");		
	}
	@Override
	public void FlapWing() {
		System.out.println("�����ؼ� ���� ����.");		
	}
	@Override
	public void sleep() {
		System.out.println("�巡���� �ڴµ� ����� �ȵȴ�.");		
	}
	
	
	public void polymorph() {
		System.out.println(species+" �巡���� ����!");
	}
}












