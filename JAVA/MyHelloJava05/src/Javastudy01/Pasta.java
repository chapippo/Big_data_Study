package Javastudy01;

public class Pasta extends Food_sol{

	public Pasta(String name, int price) {
		super(name, price);
	}
	
	@Override
	public void eat() {
		// TODO Auto-generated method stub
//		super.eat();
		System.out.println(getName()+"À»//¸¦ ¸ÔÀ½");
		System.out.println(getPrice()+"¿ø¿¡ ¸ÔÀ½");
	}
	
	
	

}
