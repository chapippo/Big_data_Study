package Javastudy04;

public class UniversityStudent {	//�Ӽ�
	private String name;
	private int age;
	private String hakbeon;	//Student�� ���� ��
	
	public String getName() {	//�޼ҵ� ; getName setName
		return name;				//getAge setAge getHakbeon setHakbeon
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getHakbeon() {
		return hakbeon;
	}
	public void setHakbeon(String hakbeon) {
		this.hakbeon = hakbeon;
	}
}
