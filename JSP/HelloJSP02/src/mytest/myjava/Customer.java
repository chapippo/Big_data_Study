package mytest.myjava;

public class Customer {
	private String name;
	private int age;
	private String id;
	
	//생성자 생성
	public Customer(String name, int age, String id) {
		this.name = name;
		this.age = age;
		this.id = id;
	}
	
	@Override
	public String toString() {
		return "이름: "+name+", 나이: "+age+", ID: "+id;
	}
	
//	public int getAge() {		
//	}
//	public checkAge() {		
//	}
	
	//나이가 limit 미만이면 false, limit 이상이면 true
	//성인의 기준이 지금은 20세지만 추후에 바뀔 것을 고려
	public boolean isAdult(int limit) {
		if(limit>age)
			return false;
		else
			return true;
	}
	
	//관리자 여부 체크, 관리자 아이디가 바뀔 수 있으니 매개변수로 받는다.
	public boolean isAdmin(String admin) {
		if(this.id.equals(admin))
			return true;
		else
			return false;
	}
	
//	public boolean is
	
}








