package Javastudy01;

public class HelloJava02_testRectangle {

	public static void main(String[] args) {
		Rectangle_sol r1 = new Rectangle_sol();	//w�� h ��� 0�� ����		
		Rectangle_sol r2 = new Rectangle_sol(2);
		Rectangle_sol r3 = new Rectangle_sol(3,2);
		System.out.println(r1.getArea());	//Error! -1
		System.out.println(r2.getArea());	//���簢��! 4
		System.out.println(r3.getArea());	//6
		
		r1.setH(10);
		r1.setW(5);
		System.out.println(r1.getArea());	//50
		
		//new Ű����
		//Ŭ������(), Ŭ������(�Ű�������) -> ������ !
		//new + ������ -> �ν��Ͻ� !
		//�ν��Ͻ��� new + ������ �� �� ���� �þ��.
		//���� ���⼱ Rectangle ��ü�� 3�� �ִ�.
		//�� 3���� �ν��Ͻ��� �ִ�.(Rectangle�� ���ؼ� 3���� �ν��Ͻ��� �������.)
		
		
		
//		//�ν��Ͻ� ����, �ν��Ͻ� �޼ҵ���� �ٸ� ��!
//		//Math��� Ŭ�������� '����������' ���Ǵ� �޼ҵ�
//		Math.random();	//0���� 1�̸��� ������ ã�Ƴ��� ��
//		//Math��� Ŭ�������� '����������' ���Ǵ� ����
//		System.out.println(Math.PI)
//		Math m1 = new Math();//���� ����


	}

}














