package Javastudy01;

public class Emokase extends Food {
	public String choiceMenu;
	
	public String getChoiceMenu() {
		return choiceMenu;
	}
	public void setChoiceMenu(String choiceMenu) {
		this.choiceMenu = choiceMenu;
	}
	
	public void sayEmo() {
		System.out.println(getName()+"�� "+getPrice()+"�� �̸�"+choiceMenu);
	}
}
