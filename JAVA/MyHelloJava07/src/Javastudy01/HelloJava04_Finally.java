package Javastudy01;

public class HelloJava04_Finally {

	public static void main(String[] args) {
		// finally : ��ħ��
		// try catch ��������
		// catch���� ���� ���� �ϴ� ���� finally �κ��� �ݵ�� �����Ѵ�
		
		int a=0,b=0,c=0,d=0;
		try {
			a = 10;
			c = a/b;
		} catch (Exception e) {
			System.out.println("�߸���");
			return;	//���α׷� ����(�ǰ� �ϴܿ� syso ���� �� ��)
		} finally {	//finally��
			//������ �����ÿ� ���� ����
			//DB �����ϴ� ���������� ������ ���� �� ���ܰ� �����
			//finally �κп� DB���� ���� �ڵ带 �Է���
			//�׷���! ���� ����� �ٷ� DB���� ������ ���� �� �ֵ��� �Ѵ�.
			//
			//catch�� �ɷ��� �� �κ��� ������ ������
						
			System.out.println("�� �κ��� ���� �� �� ���� �ִ�.");			
		}
		System.out.println("���� ���� �� ��.");
	}
}






