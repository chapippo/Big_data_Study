package Javastudy01;

public class Square_sol {
	private int wh;	
	
	//메소드
	//alt shift s + r
	public int getWh() {	//getter로 값을 읽어오고
		return wh;
	}

	public void setWh(int wh) {	//메소드 //setter로 쓸 수 있다
		if(wh<=0)
		{
			System.out.println("잘못된 값");
			this.wh = 0;
			return;
		}
		this.wh = wh;
	}

	
	//alt shift s + o
	//3번 문제
	//생성자 2개 만들기
	//Square에 대한 생성자더라도 매개변수 개수가 다르면
	//서로 다른 생성자로 본다.
	
	//생성자
	//디폴트 생성자 :: 아무 것도 없는 생성자
	public Square_sol(int wh) {		//매개변수가 있는 Square 생성자
//		this.wh = wh;				//이런 식으로 매개변수 다르게 해서
   //위와 같이 바로 값을 초기화하는 경우
   //음수값을 그대로 초기화
   //그래서 아래와 같이
   //음수예외처리를 한 set함수를 이용해서
   //wh값 초기화	
		
		setWh(wh);//자동으로 예외처리 들어감
	}								//이름만 같은 메소드나 생성자 만드는 걸
									//오버로딩한다고 함

	
	public Square_sol() {	//이렇게 아무것도 없는 생성자를 디폴트 생성자라고 부름
	}						//만약 클래스에 생성자가 없으면 이 디폴트 생성자가
							//내부에 이미 자동으로 존재함
//		super();			//이렇게 아무것도 없는 생성자는
							//생성자가 '명시적으로' 하나라도 생기면 없어진다.
							//그래서 이런 생성자를 쓰고 싶다면
							//지금처럼 '명시적으로' 만들어줘야 함	
}
