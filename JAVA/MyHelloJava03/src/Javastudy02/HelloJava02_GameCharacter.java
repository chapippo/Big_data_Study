package Javastudy02;

public class HelloJava02_GameCharacter {
	public static void sayHi() {
		System.out.println("�ȳ�~~");
	}
	
	public static void knightSkill() {
		System.out.println("��������");
	}
	
	public static void magicianSkill() {
		System.out.println("��������");
	}
	
	public static void citizenSkill() {
		System.out.println("����亸");
	}

	public static void main(String[] args) {
		GameCharacter c1 = new GameCharacter();
		GameCharacter c2 = new GameCharacter();
		GameCharacter c3 = new GameCharacter("ghi","citizen");
		
		c1.setId("abc");
		c1.setJob("����");
		c2.setId("def");
		c2.setJob("������");
		
		
	}
}









