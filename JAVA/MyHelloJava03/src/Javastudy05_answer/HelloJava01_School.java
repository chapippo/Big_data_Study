package Javastudy05_answer;

public class HelloJava01_School {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//�ٸ� ��Ű�� ���� Student
		Javastudy04.Student s1 = new Javastudy04.Student();
		s1.setAge(25);
		s1.setName("������");
		s1.study();
		
		//���� ��Ű�� ���� Student
		Student ss = new Student();
		ss.level=26;
		
		KBStudent kb1 = new KBStudent();
		kb1.setName("������");
		kb1.setAge(24);
		kb1.setEducation("����");
		kb1.setGender("����");
		kb1.study();
		kb1.attend("�Խ�");
		kb1.attend("���");

	}

}












