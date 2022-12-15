package Javastudy04;

public class Employee {
	private String name;
	private String sabeon;
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getSabeon() {
		return sabeon;
	}
	public void setSabeon(String sabeon) {
		this.sabeon = sabeon;
	}
	
	public Employee(String name, String sabeon) {
		this.name = name;
		this.sabeon = sabeon;
	}
	
	
	
	//hashCode + ctrl space
	//�޸𸮸��� ������ �ؽ� �ڵ尡 ����
	//Object�� Ŭ���� �ִ� hashCode �޼ҵ� ��ſ�
	//���� ���� �� ȣ����
	//Object Ŭ������ �ִ� hashCode�� �޸� �������� �ִ�.
	//�̰Ÿ� ���� ���ϴ´�� �ٲ���� !!  HashSet���� �ߺ� ���� �� ��
	@Override
	public int hashCode() {
		// ���ڿ��� hashCode�� ����.
		// �׷��� ���ڿ��� ������ hashCode�� ���ٰ� ������
		// �׷��� Set������ �ߺ��� ���� ������ �߰� �� ��
		return (name+sabeon).hashCode();
	}
	
	
	
	//equals���� ������ �Ǿ�� HashSet���� ����� ������
	@Override
	public boolean equals(Object obj) {
		Employee temp = (Employee)obj;
		return temp.getName().equals(name) && temp.getSabeon().equals(sabeon);
		//������� �������� �ϰ� ������ name�κ� �����
	}
}












