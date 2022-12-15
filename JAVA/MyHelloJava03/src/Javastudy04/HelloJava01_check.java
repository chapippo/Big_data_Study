package Javastudy04;

public class HelloJava01_check extends Student {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Student 클래스를 UnivStudent클래스가 잘 상속했는지 체크
		
		
		Student s1 = new Student();
		UniversityStudent u1 = new UniversityStudent();
		UnivStudent us1 = new UnivStudent();
		
		s1.setAge(10);
		s1.setName("노민영");

		u1.setAge(20);
		u1.setName("이현민");
		u1.setHakbeon("001");
		
		us1.setAge(30);
		us1.setName("이유나");
		us1.setHakbeon("002");
		
		KBStudent n1 = new KBStudent();
		n1.setAge(30);
		n1.setName("김진혁");
		n1.setGender("남");
		n1.setEducation("대졸");
//		System.out.println(n1.Attend(1););
		System.out.println("이름: "+n1.getName()+"/나이: "+n1.getAge()+
				"/성별: "+n1.getGender()+"/학력: "+n1.getEducation());
		
		n1.study();
		
//		Sphere a1 = new Sphere();
		
		
	}
}

