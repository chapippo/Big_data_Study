package Javastudy05_answer;

public class Sphere extends Javastudy02.Circle{
	//add constructor sphere
	//con
	public Sphere(int r) {
		super(r);	//Circle Ŭ������ �����ڸ� ȣ���� ��
		//Circle ������ ȣ��ÿ� PI���� ���ǵǵ��� �س���.
		//PI = 3.14
	}
	
	public double getVolume() {
		return (4/3)*getPI()*getR()*getR()*getR();
	}
	
	//Sphere Ŭ������ 
	//KBStudent�ʹ� �ٸ��� ���ο� �Ӽ��� �߰����� �ʾҴ�.
	//��ſ� ���ο� ����� �߰��ߴ�.
		
	//protected
	//���� ��Ű��(=����)������ public�̶� :�Ȱ���.
	//����Ʈ ���� �����ڶ� ����������.
	
	//������ �޶�����
	//Sphere�� ��ӹ��� Ŭ���������� �̰� �� �� �ִ�.
	protected String Color;
	protected void spin() 
	{
		System.out.println("���ۺ���~");
	}
}












