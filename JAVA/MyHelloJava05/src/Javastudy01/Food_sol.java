package Javastudy01;

public class Food_sol {
	private String name;
	private int price;
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}
	
	//���࿡ ������ ���� �� �ݵ��
	//�̸��� ������ �� �˾ƾ� �Ѵٸ�
	//�Ű����� 2�� �ִ� ������ �ϳ��� ����� �ȴ�.
	//(alt shift s ������ o Ű)
	public Food_sol(String name, int price) {
		super();	//����Ŭ������ ������. �� ObjectŬ������ ������
		this.name = name;
		this.price = price;
	}
	//�ƴϸ�.. ������ �̸����̶� �˾ƾ� �Ѵٸ�..
	public Food_sol(String name) {
		super();
		this.name = name;
	}
	
	public void eat() {
		System.out.println(name+"��/�� "+price+"������ ����");
	}
	

}
