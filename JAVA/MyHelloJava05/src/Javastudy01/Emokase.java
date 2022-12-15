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
		System.out.println(getName()+"은 "+getPrice()+"원 이며"+choiceMenu);
	}
}
