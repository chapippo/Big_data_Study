package Javastudy02;

public class HelloJava02_GameCharacter {
	public static void sayHi() {
		System.out.println("안녕~~");
	}
	
	public static void knightSkill() {
		System.out.println("물리어택");
	}
	
	public static void magicianSkill() {
		System.out.println("마법공격");
	}
	
	public static void citizenSkill() {
		System.out.println("허공답보");
	}

	public static void main(String[] args) {
		GameCharacter c1 = new GameCharacter();
		GameCharacter c2 = new GameCharacter();
		GameCharacter c3 = new GameCharacter("ghi","citizen");
		
		c1.setId("abc");
		c1.setJob("전사");
		c2.setId("def");
		c2.setJob("마법사");
		
		
	}
}









