package Javastudy03;


//Comparable : ���� �� ���̴� �������̽�
public class KBStudent implements Comparable<KBStudent> {
	private String name;//���������� �ǹ̿��� m_name�̶�� �ϱ⵵ ��
	private String gender;
	private int age;
	private int number;	//Database���� "�⺻Ű(PK)"�� ����
	
	public KBStudent(String name, String gender, int age, int number) {
		this.name = name;
		this.gender = gender;
		this.age = age;
		this.number = number;
	}

	public String getName() {return name;}
	public void setName(String name) {this.name = name;}
	public String getGender() {return gender;}
	public void setGender(String gender) {this.gender = gender;}
	public int getAge() {return age;}
	public void setAge(int age) {this.age = age;}
	public int getNumber() {return number;}
	public void setNumber(int number) {this.number = number;}
	
	
	//��½� ����� �޼ҵ�
	@Override
	public String toString() {
		return String.format("�̸�:%s, ����:%s, ����:%d, ��ȣ:%d", name,gender,age,number);
	}
	
	
	//(��� ������ ������ ����, (������))
	//�ߺ�üũ �� ����� �޼ҵ�(contain���� ����)
	@Override
	public boolean equals(Object obj) {
		//���ϴ� ������ ���� number��
		/*
		KBStudent k = (KBStudent)obj;
		return k.getNumber() == number;
						=
		 */
		return ((KBStudent)obj).getNumber() == number;		
	}
	

	@Override
	public int compareTo(KBStudent o) {
		// TODO Auto-generated method stub
		// return 0;
		return age - o.getAge();	//�������� ���Ŀ� ����
	}
	
}









