package Javastudy02_t;

//Cryptid�� ��ӹ���
//ȯ����(=����� ����)�̶�� ������ Ŭ������ ��ӹ���
public class Unicorn extends Cryptid implements Fliable, Runsable {

	//������ ���� �߰�
	private String Color;	
	public String getColor() {
		return Color;
	}
	public void setColor(String color) {
		Color = color;
	}
	
	public void cry() {
		System.out.println(Color+"�� ���� �𳯸���,");
		System.out.println("����������~(�������� ��Ҹ���)");
	}
	
	
	//�ϴ� 5���� �������̵� �� �޼ҵ���� �ʼ�
	@Override
	public void Run() {
		System.out.println("������ �޸��ϴ�.");
	}
	@Override
	public void jog() {
		System.out.println("������");
	}
	@Override
	public void Fly() {
		System.out.println("����ϰ� ����.");
	}
	@Override
	public void FlapWing() {
		System.out.println("����ϰ� �۴��Ÿ���.");
	}
	@Override
	public void sleep() {
		System.out.println("������ ����� �ʴ´�.");
	}
}
