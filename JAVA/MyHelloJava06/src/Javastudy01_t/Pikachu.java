package Javastudy01_t;

public class Pikachu implements Animalable, Cloneable {
	
	
	//�������̽� Cloneable ����, �� ������ clone �������̵� �ϱ�
	//�ٸ� ��Ű�������� ��� Ȱ���Ϸ��� protected�� ��� public���� �ٲ�� ��
	//Cloneable�� clone �޼ҵ�� �̹� default�� �����Ǿ� ������
	//�������̵��� �ؾ� �� �� �ִ�.
	@Override
	/*protected*/ public Object clone() throws CloneNotSupportedException {
		return super.clone();
	}
	
	
	
	private String Name;	//��ü���� Ʈ���̳ʰ� �θ��� �̸�
	
	//getter setter
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}	

	//������
	public Pikachu(String name) {
		super();
		Name = name;
	}

	//�������̽��� ���� �޼ҵ� ����
	@Override
	public void charming() {
		System.out.println("��ī��ī~");
	}

}
