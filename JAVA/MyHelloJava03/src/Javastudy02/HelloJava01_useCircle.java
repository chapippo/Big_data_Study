package Javastudy02;

public class HelloJava01_useCircle {
	
	
	//Ŭ���� �޼ҵ�
	public static void sayHello() {
		System.out.println("Hello World");
	}
	
	//�ν��Ͻ� �޼ҵ�
	//�̰� static �ȿ��� ȣ���Ϸ���, �ν��Ͻ��� ����� ����
	//�� �ȿ��� ȣ���ؾ� ��
	public void toSay(String name) {
		System.out.println(name+"��, �ȳ�");
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle c1 = new Circle(2);
		Circle c2 = new Circle(3);
		System.out.println("c1 ���� : "+c1.getArea());
		System.out.println("c2 ���� : "+c2.getArea());
		
		
		//Ŭ���� ������ static���� ������ �� �����Ϸ���
		//��ü���� ���� �����ϴ� ���� �ƴ� Ŭ�������� ���� �����ؾ� ���� �� ��
//		c1.setPI(4); 
		Circle.setPI(3.0);	//PI ���� �ٲٸ� ��� Circle�鿡��
							//������ ��ģ��.
		System.out.println("c1 PI : "+c1.getPI());
		System.out.println("c1 ���� : "+c1.getArea());
		System.out.println("c2 ���� : "+c2.getArea());
		
		
		//Ŭ���� �޼ҵ� Ư¡
		//Ŭ���� �޼ҵ� �ȿ��� �ν��Ͻ� ������ �ν��Ͻ� �޼ҵ尡 �� ����.
		//���� : static�� ���� �͵��� �޸𸮿� ���� �ö󰡱� �����̴�.
		//Ŭ���� ������ Ŭ���� �޼ҵ�� ���α׷� �������ڸ��� �ö� !!!!!!! (static�� ���� ��)
		//�ν��Ͻ� ������ �ν��Ͻ� �޼ҵ�� new Ű���� ���� ��
		//�޸𸮿� �ö󰣴�.	
		sayHello();										//static�� ���� �͸� ȣ�� ���� @@@@@
		//toSay("������");	
		
		//static�� �پ��ִ� �޼ҵ� �ȿ���	
		//static�� �پ��ִ� �޼ҵ峪 ������ �´�.
		//static�� ���� �޼ҵ� �ȿ���
		//static�� ���� ������ �޼ҵ� �� �� �ִ�.

		
		
		//static �پ� �ִ� �޼ҵ� �ȿ���
		//static ���� �޼ҵ�(=�ν��Ͻ� �޼ҵ�)�� ȣ���ϰ� ������
		//�ν��Ͻ��� ����� ���� ȣ���ϸ� ��
		//�̷� �� ��üȭ��� �� !!!(=�ڱ� �ڽ��� �̿��� �ν��Ͻ� �����)
		new HelloJava01_useCircle().toSay("������");
		
		HelloJava01_useCircle temp = new HelloJava01_useCircle();
		temp.toSay("������");
	}
}









