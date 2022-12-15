package Javastudy01_t;

public class Squirtle implements Pokemonable {

//	@Override
//	public void sleep() {
////		Pokemonable.super.sleep();
//		System.out.println("µå¸£¸£·· Äí¾Æ¾Æ¾Æ");
//	}
	
	@Override
	public void charming() {
		System.out.println("²¿ºÏ²¿ºÏ!");
	}

	@Override
	public void grow() {
		return;
		//½Ä¹°ÀÌ ¾Æ´Ï´Ï±î ¾Æ¹«°Íµµ ¾ÈÇÔ

	}

	@Override
	public void fight() {
		System.out.println("¹°´ëÆ÷!");

	}


}
