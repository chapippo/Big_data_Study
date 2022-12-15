package Javastudy01_t;

public class Bulbasaur implements Pokemonable {

	@Override
	public void charming() {
		System.out.println("¾¾ÀÌ¾¾ÀÌ~");
	}

	@Override
	public void grow() {
		System.out.println("±¤ÇÕ¼ºÀ¸·Î ÀÚ¶ó¶ó");
	}

	@Override
	public void fight() {
		System.out.println("µ¢ÄğÃ¤Âï!");
	}

}
