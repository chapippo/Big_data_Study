package Javastudy02;

public class HelloJava01_useToString {

	public static void main(String[] args) {
		Student s = new Student("�̵���",34);
		System.out.println(s.getAge());
		System.out.println(s.getName());
		System.out.println(s); //�����Ϸ����� �ڵ����� toString ����
		System.out.println(s.toString());
		//Javastudy02.Student@15db9742 
		// = Object Ŭ������ ���� ���ǵǾ� �ִ� �ڵ�
		//getClass().getName()+ '@' + Integer.toHexString(hascode)
		//��Ű����.Ŭ������@�����ڵ�
		//���� s�� ���� �޸� ���� ���� �ڵ�(��ü�� �ϳ��ϳ��� �����ϱ� ���� )
		Student s2 = new Student("�̵���",34);
		System.out.println(s2);
	}

}
