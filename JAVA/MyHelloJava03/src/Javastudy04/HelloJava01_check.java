package Javastudy04;

public class HelloJava01_check extends Student {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Student Ŭ������ UnivStudentŬ������ �� ����ߴ��� üũ
		
		
		Student s1 = new Student();
		UniversityStudent u1 = new UniversityStudent();
		UnivStudent us1 = new UnivStudent();
		
		s1.setAge(10);
		s1.setName("��ο�");

		u1.setAge(20);
		u1.setName("������");
		u1.setHakbeon("001");
		
		us1.setAge(30);
		us1.setName("������");
		us1.setHakbeon("002");
		
		KBStudent n1 = new KBStudent();
		n1.setAge(30);
		n1.setName("������");
		n1.setGender("��");
		n1.setEducation("����");
//		System.out.println(n1.Attend(1););
		System.out.println("�̸�: "+n1.getName()+"/����: "+n1.getAge()+
				"/����: "+n1.getGender()+"/�з�: "+n1.getEducation());
		
		n1.study();
		
//		Sphere a1 = new Sphere();
		
		
	}
}

