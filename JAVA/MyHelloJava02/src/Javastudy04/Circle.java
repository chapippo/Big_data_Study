package Javastudy04;

public class Circle {
	private int r;	//반지름값
	private final double pi = 3.14;	//원주율값
	
	
	//반지름 값 읽어오는 것
	public int getR() {
		return r;
	}
	//반지름 값 set하는 것
	//반지름 값이 0 이하일 경우 0으로 고정시켜버린다.
	public void setR(int r) {
		if(r<0)
			this.r=0;
		else
			this.r = r;
	}
	
	//public 타입의 함수(=메소드)를 2개 새로 만든다.
	//넓이 구하기, 둘레 구하기
	public double getArea() {
		if(r<=0) {
			System.out.println("반지름 값 확인바람");
			return 0;
		}
		return r*r*pi;		
	}
	
	//이 메소드는 매개변수도 필요없음
	public double getRound() {
		if(r<=0) {
			System.out.println("반지름 값 확인바람");
			return 0;
		}
		return 2*r*pi;
	}
	
	
	
	//(Circle 안에는)생성자(가 있는데)
	//기본 형태는 아래와 같이 아무 것도 수행하지 않는 코드다.
	//public Circle() {}
	//생성자 = 리턴값 없는 함수라고도 본다.
	
	//생성자는 글자 그대로 생성할 때 호출하므로
	//변수를 선언함과 동시에 속성값도 바로 세팅할 수 있다.
	//new Circle() 이라고 적을 땐
	//r 값을 나중에 별도 세팅해야 하지만
	
	//이렇게 매개변수로 r 값 적으면 선언과 동시에 r 값 선언 가능함 535353
	public Circle(int r) {
		setR(r);
	}
	//"문제"가 있음 !
	//이렇게 생성자를 명시적으로 적게 되면
	//기존에 있던 생성자가 지워짐
	
	//기존에 있던 생성자 => public Circle() {}
	//그래서 이 상태로 다시 main 있는 코드 가보면 빨간줄이 있다.
	
	
	
	//해결책
	//아무 것도 없는 생성자를 이번엔 '명시적으로' 다시 써준다.
	public Circle() {
		
	}
	
	
	
	//오버로딩
	//생성자나 함수(=메소드)만들 때
	//이름은 똑같은데 매개변수의 개수나 타입이 다른 경우엔
	//서로 다른 걸로 취급합
	//즉 Circle(r)이랑 Circle()은 서로 전~혀 다른 것
	//즉 중복된 생성자나 함수가 아니란 뜻 !!!!!
	
}








