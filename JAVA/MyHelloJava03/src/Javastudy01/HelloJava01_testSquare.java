package Javastudy01;

public class HelloJava01_testSquare {

	public static void main(String[] args) {
		Square_sol s1 = new Square_sol();
		
		s1.setWh(-1);	//�߸��� ��
		System.out.println(s1.getWh());//get�� �о���°�
		
		s1.setWh(10);	//����ε� ��
		System.out.println(s1.getWh());
		
		//�ν��Ͻ��� '-50'�� �־��� �� ���� '-50'���� �״�� ����
		//������� ����
		//�׷��� ������ �κ��� ���� !!!
		Square_sol s2 = new Square_sol(-50);
		System.out.println(s2.getWh());
	}
}
