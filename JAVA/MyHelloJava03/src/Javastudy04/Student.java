package Javastudy04;

public class Student {
	private String name;
	private int age;
	
	
	public String getName() {
		return name;
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
	
	//1번
	public /*static*/ void study() {
//		System.out.println("학생이면 공부를 해야지 !");
		System.out.println(this.name+"학생이");
		System.out.println(this.age+"살 답게");
		System.out.println("공부합니다.");
	}
	
	
}
