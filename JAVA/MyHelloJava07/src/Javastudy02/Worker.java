package Javastudy02;

public class Worker {
	private String Name;	//�̸�
	private String cNum;	//���
	
	public Worker(String name, String cNum) {
		super();
		Name = name;
		this.cNum = cNum;
	}
		
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public String getcNum() {
		return cNum;
	}
	public void setcNum(String cNum) {
		this.cNum = cNum;
	}
	

	//toString + ctrl space
	@Override
	public String toString() {
		return "�̸� : "+Name+", ��� : "+cNum;
	}
	
	
	//equals�� �������߱� ������ ����� �̸��� ���� ����� ���� ������� ������
	//equals + ctrl space
	@Override
	public boolean equals(Object obj) {
		Worker w = (Worker)obj;//(����ȯ)�̷���) w�� obj�� ���� ���� ����Ŵ
		return w.getcNum().equals(cNum) && w.getName().equals(Name);
	}
}










