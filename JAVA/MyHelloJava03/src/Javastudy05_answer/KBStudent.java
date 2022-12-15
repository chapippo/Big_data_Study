package Javastudy05_answer;

//import Javastudy04.Student;
//다른 패키지일 경우에는 import를 하거나 /
//패키지명.클래스 하면 됨

//같은 패키지 안에도 Student 있고
//다른 패키지 안에도 Student가 있는데,
//다른 패키지 안에 있는 Student를 상속하고 싶을 경우에는 꼭
//패키지명.Student를 한다.
//근데 이렇게 클래스명이 겹치면 여러모로 혼란스러우므로 이름은 되도록 겹치지 않게!!
public class KBStudent extends Javastudy04.Student{

	//KBStudent에만 있는 속성들
	private String gender;
	private String education;	//학력
	
	//KBStudent에만 있는 메소드들
	public String getGender() {
		return gender;
	}

	public void setGender(String gender) {
		this.gender = gender;
	}

	public String getEducation() {
		return education;
	}

	public void setEducation(String education) {
		this.education = education;
	}
	

	public void attend(String att) {
		//this.name이라고 하면 안 되고 getName으로 접근됨
		System.out.println(getName());	//접근하려면 public으로 되어있는 getName()으로 접근해야
		System.out.println(getAge());
		System.out.println(gender);
		System.out.println(education);
		System.out.println(att+"!!!");	//출석, 결석 등 적기
	}
}














