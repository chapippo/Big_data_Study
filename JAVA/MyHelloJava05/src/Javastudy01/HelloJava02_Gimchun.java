package Javastudy01;

public class HelloJava02_Gimchun {

	public static void main(String[] args) {
		
		Food_sol f1 = new Food_sol("�̸�",5000);
		Food_sol f2 = new PorkCutlet("�����",8000);	//������ �̿� / Food_sol������ PorkCutlet���� �ν��Ͻ��� �������
		PorkCutlet f3 = new PorkCutlet("���",9000);
		
		Food_sol f4 = new Pasta("�˷����ø���",7000);
		
		f1.eat();	//Food Ŭ������ eat ȣ��
		f2.eat();	//f2�� f3�� (PorkCutlet���� �ν��Ͻ��� ������� ������) 
		f3.eat();	//PorkCutlet�� eat()�� ȣ��
		
		
		if(f2 instanceof PorkCutlet)
		{
			((PorkCutlet)f2).eat(5);	//PorkCutlet�� ���� ������ ����ȯ �ʿ�
		}
		if(f2 instanceof PorkCutlet)
		{
			((PorkCutlet)f2).eat("�ʰ�����");
		}
		
		f3.eat(10);	//f3�� PorkCutlet���� ������� ������ �ٷ� ����
		f3.eat("���ݸ�");
		System.out.println("-----");
		if(f4 instanceof Pasta)
		{
			((Pasta)f4).eat();
		}
	}

}
