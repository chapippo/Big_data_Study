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
		System.out.println(getId()+"의 mp"+mp+"을 사용한 공격!");
	}

}
