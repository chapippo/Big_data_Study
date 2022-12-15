package Javastudy01;

public class Emokase_sol extends Food_sol{

	public Emokase_sol(String name, int price) {
		super(name, price);
	}
	
	public void sayEmo() {
		System.out.println("이모님~"+getName()+"주세요.");
	}
	public String choiceMenu(String menu) {
		return "이모의 특선 메뉴 : "+menu;
	}

}
