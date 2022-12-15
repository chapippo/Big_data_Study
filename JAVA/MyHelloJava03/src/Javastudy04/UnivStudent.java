package Javastudy04;

//Student에 있는 name과 age(속성)을 따로 적지 않아도
//그리고 getter setter가 UnivStudent에도 있는 것
//상속 관계
//
//         자식 클래스			부모 클래스
public class UnivStudent extends Student {	//name, age가 내장이 되어있다(상속을 받음)
	
	private String hakbeon;

	public String getHakbeon() {
		return hakbeon;
	}

	public void setHakbeon(String hakbeon) {
		this.hakbeon = hakbeon;
	}

}