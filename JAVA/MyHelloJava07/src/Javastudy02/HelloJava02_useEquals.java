package Javastudy02;

public class HelloJava02_useEquals {

	public static void main(String[] args) {
		String a = "�̵���";
		String b = "�̵���";
		
		//c�� d�� �����ʹ� ������ �ٸ� ��ġ�� ����Ŵ. �� ��������
		//c�� �뱸�� �躸��, d�� �λ��� �躸�Զ�� ���� �ȴ�.		
		//Equals�� �̸��� �� ������
		String c = new String("�躸��");
		String d = new String("�躸��");
		
		Student s1 = new Student("�̵���",340);
		Student s2 = new Student("�̵���",340);
		
		System.out.println(a==b);   //t
		System.out.println(c==d);   //f -> �� false�� (�����ʹ� ������)c�� d�� �ٸ� '����' �����ϱ� ����
		System.out.println(s1==s2); //f
		
		
		
		System.out.println("-----");
		
		
		
		// String�� (==����) ���� equals�� �񱳸� �ؾ�		
		System.out.println(a.equals(b));   //t
		System.out.println(c.equals(d));   //t
				
		
		//�ٸ��� ������ ����??
		//s1�� s2�� �ٸ� ���� �����ϱ� �����̰�
		//Object Ŭ���������� equals�� �� hash�ڵ带 �� (������)
		
		//s1�� s2�� ��ǻ� �Ȱ����� �ٸ��ٰ� ������:��
		//���� �� ���� ������ ���ϰ� �غ��� !!!!!
		System.out.println(s1.equals(s2)); //f
		
		
		System.out.println("-----");
		
		
		Worker w1 = new Worker("������","001");
		Worker w2 = new Worker("������","001");
		Worker w3 = new Worker("������","002");
		
		System.out.println(w1.equals(w2)); //t
		System.out.println(w2.equals(w3)); //f
	}

}









