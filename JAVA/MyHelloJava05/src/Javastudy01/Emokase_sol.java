package Javastudy01;

public class Emokase_sol extends Food_sol{

	public Emokase_sol(String name, int price) {
		super(name, price);
	}
	
	public void sayEmo() {
		System.out.println("�̸��~"+getName()+"�ּ���.");
	}
	public String choiceMenu(String menu) {
		return "�̸��� Ư�� �޴� : "+menu;
	}

}
