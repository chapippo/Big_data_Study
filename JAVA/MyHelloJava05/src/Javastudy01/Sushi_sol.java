package Javastudy01;

public class Sushi_sol extends Food_sol{

	private String wasabiBrand;
	
	//�Ű������� �ִ� �����ڸ� �ִٸ�
	//�׸��� �׷� �����ڰ� ���� �� �ִٸ�(Food���� 2���� ������ ����)
	//�� ������ �� �ϳ��� ���� �ȴ�.
	
	//����Ŭ������ �Ű����� ���� �����ڰ� �����Ƿ�
	//�ڼ�Ŭ������ ������ �Ű������� �־�� ��
	public Sushi_sol(String name) {
		super(name);	//Food Ŭ������ �����ڸ� �ǹ�
	}

	
	//�� �ʹ��� �̸��� �ƴ϶� ���ݵ� �˰� �ʹٸ�?
	//(alt shift s + o �� ����)
	public Sushi_sol(String name, int price) {
		super(name, price);	//Food Ŭ������ �����ڸ� �ǹ�
	}

	//�� �ʹ��� �̸�,���ݻ� �ƴ϶� �ͻ�� �귣�嵵 �� �� �ִ�
	public Sushi_sol(String name, int price, String wasabiBrand) {
		super(name, price);	//Food Ŭ������ �����ڸ� �ǹ�
		this.wasabiBrand = wasabiBrand;
	}


	//alt shift s + r
	public String getWasabiBrand() {
		return wasabiBrand;
	}

	public void setWasabiBrand(String wasabiBrand) {
		this.wasabiBrand = wasabiBrand;
	}

}










