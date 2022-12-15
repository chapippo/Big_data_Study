package Javastudy05_answer;

public class HelloJava01_School {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//다른 패키지 안의 Student
		Javastudy04.Student s1 = new Javastudy04.Student();
		s1.setAge(25);
		s1.setName("이진용");
		s1.study();
		
		//같은 패키지 안의 Student
		Student ss = new Student();
		ss.level=26;
		
		KBStudent kb1 = new KBStudent();
		kb1.setName("고재현");
		kb1.setAge(24);
		kb1.setEducation("대졸");
		kb1.setGender("남성");
		kb1.study();
		kb1.attend("입실");
		kb1.attend("퇴실");

	}

}












