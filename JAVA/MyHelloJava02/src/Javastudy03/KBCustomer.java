package Javastudy03;

public class KBCustomer {
	
	//private이 붙으면
	//다른 클래스에서(다른 파일에서)
	//읽거나 쓰지 못함
	//잘못된 값이나 예외를 처리해야 되는 것들 처리를 잘하기 위해 private 사용@@
	
	//public, private : 정보의 은닉(우회해서 접근)
	//(c#책에선 캡슐화라고 되어있는데 , 캡슐은 아님)
	// * 캡슐에 대한 정의는 java책에서 찾아보기
	private int age;
	private String name;
	private String cNum;
	
	
	
	//alt shift s 키 누르기
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	
	public String getcNum() {
		return cNum;
	}
	public void setcNum(String cNum) {
		this.cNum = cNum;
	}
	
	
	

}
