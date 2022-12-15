package Javastudy04;

public class UniversityStudent {	//속성
	private String name;
	private int age;
	private String hakbeon;	//Student에 없는 것
	
	public String getName() {	//메소드 ; getName setName
		return name;				//getAge setAge getHakbeon setHakbeon
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getHakbeon() {
		return hakbeon;
	}
	public void setHakbeon(String hakbeon) {
		this.hakbeon = hakbeon;
	}
}
