package Javastudy02;

public class KBStudent {
	private String Name;
	private String gender;
	int Age;
	int Number;
	
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	public int getAge() {
		return Age;
	}
	public void setAge(int age) {
		Age = age;
	}
	public int getNumber() {
		return Number;
	}
	public void setNumber(int number) {
		Number = number;
	}
	
	public KBStudent(String name, String gender, int age, int number) {
//		super();
		Name = name;
		this.gender = gender;
		Age = age;
		Number = number;
	}
	
	
//	@Override
//	public String toString() {
//		return "이름 : "+Name+", 성별 : "+gender+", 나이 : "+Age+", 번호 : "+Number;
//	}
//	
//	
//	@Override
//	public boolean equals(Object obj) {
//		KBStudent s = (KBStudent)(obj);
//		return s.getNumber() == this.Number;
//	}
	
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return "이름: "+Name+", 성별: "+gender+", 나이: "+Age+", 번호";
	}
}












