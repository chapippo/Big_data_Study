package Javastudy05_answer;

//import Javastudy04.Student;
//�ٸ� ��Ű���� ��쿡�� import�� �ϰų� /
//��Ű����.Ŭ���� �ϸ� ��

//���� ��Ű�� �ȿ��� Student �ְ�
//�ٸ� ��Ű�� �ȿ��� Student�� �ִµ�,
//�ٸ� ��Ű�� �ȿ� �ִ� Student�� ����ϰ� ���� ��쿡�� ��
//��Ű����.Student�� �Ѵ�.
//�ٵ� �̷��� Ŭ�������� ��ġ�� ������� ȥ��������Ƿ� �̸��� �ǵ��� ��ġ�� �ʰ�!!
public class KBStudent extends Javastudy04.Student{

	//KBStudent���� �ִ� �Ӽ���
	private String gender;
	private String education;	//�з�
	
	//KBStudent���� �ִ� �޼ҵ��
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
		//this.name�̶�� �ϸ� �� �ǰ� getName���� ���ٵ�
		System.out.println(getName());	//�����Ϸ��� public���� �Ǿ��ִ� getName()���� �����ؾ�
		System.out.println(getAge());
		System.out.println(gender);
		System.out.println(education);
		System.out.println(att+"!!!");	//�⼮, �Ἦ �� ����
	}
}














