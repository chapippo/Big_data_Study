package Javastudy03;


//Comparable : 비교할 때 쓰이는 인터페이스
public class KBStudent implements Comparable<KBStudent> {
	private String name;//멤버변수라는 의미에서 m_name이라고 하기도 함
	private String gender;
	private int age;
	private int number;	//Database에서 "기본키(PK)"와 같다
	
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
	
	
	//출력시 사용할 메소드
	@Override
	public String toString() {
		return String.format("이름:%s, 성별:%s, 나이:%d, 번호:%d", name,gender,age,number);
	}
	
	
	//(어떻게 비교할지 기준을 제시, (재정의))
	//중복체크 시 사용할 메소드(contain에서 쓰임)
	@Override
	public boolean equals(Object obj) {
		//비교하는 기준은 오직 number뿐
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
		return age - o.getAge();	//오름차순 정렬에 쓰임
	}
	
}










