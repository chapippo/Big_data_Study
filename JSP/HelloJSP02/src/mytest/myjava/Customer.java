package mytest.myjava;

public class Customer {
	private String name;
	private int age;
	private String id;
	
	//������ ����
	public Customer(String name, int age, String id) {
		this.name = name;
		this.age = age;
		this.id = id;
	}
	
	@Override
	public String toString() {
		return "�̸�: "+name+", ����: "+age+", ID: "+id;
	}
	
//	public int getAge() {		
//	}
//	public checkAge() {		
//	}
	
	//���̰� limit �̸��̸� false, limit �̻��̸� true
	//������ ������ ������ 20������ ���Ŀ� �ٲ� ���� ���
	public boolean isAdult(int limit) {
		if(limit>age)
			return false;
		else
			return true;
	}
	
	//������ ���� üũ, ������ ���̵� �ٲ� �� ������ �Ű������� �޴´�.
	public boolean isAdmin(String admin) {
		if(this.id.equals(admin))
			return true;
		else
			return false;
	}
	
//	public boolean is
	
}








