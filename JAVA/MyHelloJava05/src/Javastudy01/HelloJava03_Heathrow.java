package Javastudy01;

public class HelloJava03_Heathrow {

	public static void main(String[] args) {
		Food_sol f = new Food_sol("민트초코케이크", 15000);
		Food_sol f2 = new FishAndChips("고든램지표 피칩", 50000);
		FishAndChips f3 = new FishAndChips("멸치앤칩스", 7500);
		
		f.eat();
		f2.eat();
		f3.eat();
		((FishAndChips)f2).eat();
	}

}
