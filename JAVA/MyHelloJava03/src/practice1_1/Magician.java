package practice1_1;

import Javastudy03.GameCharacter;

public class Magician extends GameCharacter {
	private int mp;

	public int getMp() {
		return mp;
	}

	public void setMp(int mp) {
		this.mp = mp;
	}
	
	public void magicArrow() {
		System.out.println(getId()+"�� mp"+mp+"�� ����� ����!");
	}

}
