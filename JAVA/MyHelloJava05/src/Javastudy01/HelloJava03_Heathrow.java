package Javastudy01;

public class HelloJava03_Heathrow {

	public static void main(String[] args) {
		Food_sol f = new Food_sol("��Ʈ��������ũ", 15000);
		Food_sol f2 = new FishAndChips("��緥��ǥ ��Ĩ", 50000);
		FishAndChips f3 = new FishAndChips("��ġ��Ĩ��", 7500);
		
		f.eat();
		f2.eat();
		f3.eat();
		((FishAndChips)f2).eat();
	}

}
