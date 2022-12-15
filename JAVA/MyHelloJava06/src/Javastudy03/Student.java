package Javastudy03;

public class Student {
	private int age;
	private String Name;
	
	public int getAge() {		
		return age;
	}
	
	//throws : 이 메소드는 에러를 던질 가능성이 있다.@@?
	public void setAge(int age) throws Exception {
		if(age<=0)
			throw new Exception("나이는 0보다 작을 수 없음"+age);
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
