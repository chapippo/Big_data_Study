package Javastudy02;

public class Student {
	private String Name;
	private int Age;
	public Student(String name, int age) {
//		super();
		Name = name;
		Age = age;
	}
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public int getAge() {
		return Age;
	}
	public void setAge(int age) {
		Age = age;
	}
	
	// ' toString �޼ҵ� '
	//Object Ŭ������ toString �޼ҵ带 �������̵���
	@Override
	public String toString() {
		//return super.toString();
		return "�̸�:"+Name+", ����:"+Age;
	}
}












