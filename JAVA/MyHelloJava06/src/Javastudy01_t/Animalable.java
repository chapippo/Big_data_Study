package Javastudy01_t;

public interface Animalable {
	public void charming();
	//�� �޼ҵ�� �ݵ�� �����ؾ� ��
	
	//default�� ���� �������� �ʾƵ� �ȴ�.
	
	//(�������̽��� Ư���� �޼ҵ带 �����ؾ� �ϴ� �� �´�
	//�ٸ�, ��Ģ�� �ο��� �ʿ䰡 �ֳ� ���� ���� default�� �ٿ���. @@@)
	//default�� ���� ���� �ش� �޼ҵ带 �������� �ʾƵ� �ȴ�.
	public default void sleep() {
		System.out.println("���� ��ϴ�.");
	}
	//public�� ���� Animalable�� ����ϴ� Ŭ�������� �� ��밡��
	//public�� ����� �ȴٸ�?? @@@
}
