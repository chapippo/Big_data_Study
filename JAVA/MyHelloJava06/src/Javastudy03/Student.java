package Javastudy03;

public class Student {
	private int age;
	private String Name;
	
	public int getAge() {		
		return age;
	}
	
	//throws : �� �޼ҵ�� ������ ���� ���ɼ��� �ִ�.@@?
	public void setAge(int age) throws Exception {
		if(age<=0)
			throw new Exception("���̴� 0���� ���� �� ����"+age);
		else
			this.age = age;
	}
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	

}
