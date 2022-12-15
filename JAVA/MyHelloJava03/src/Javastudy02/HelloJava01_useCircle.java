package Javastudy02;

public class HelloJava01_useCircle {
	
	
	//클래스 메소드
	public static void sayHello() {
		System.out.println("Hello World");
	}
	
	//인스턴스 메소드
	//이걸 static 안에서 호출하려면, 인스턴스를 만들고 나서
	//그 안에서 호출해야 함
	public void toSay(String name) {
		System.out.println(name+"님, 안녕");
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle c1 = new Circle(2);
		Circle c2 = new Circle(3);
		System.out.println("c1 넓이 : "+c1.getArea());
		System.out.println("c2 넓이 : "+c2.getArea());
		
		
		//클래스 생성시 static으로 설정한 뒤 접근하려면
		//객체명을 통해 접근하는 것이 아닌 클래스명을 통해 접근해야 주의 안 뜸
//		c1.setPI(4); 
		Circle.setPI(3.0);	//PI 값을 바꾸면 모든 Circle들에게
							//영향을 끼친다.
		System.out.println("c1 PI : "+c1.getPI());
		System.out.println("c1 넓이 : "+c1.getArea());
		System.out.println("c2 넓이 : "+c2.getArea());
		
		
		//클래스 메소드 특징
		//클래스 메소드 안에는 인스턴스 변수나 인스턴스 메소드가 못 들어간다.
		//이유 : static이 붙은 것들이 메모리에 먼저 올라가기 때문이다.
		//클래스 변수나 클래스 메소드는 프로그램 시작하자마자 올라감 !!!!!!! (static이 붙은 것)
		//인스턴스 변수나 인스턴스 메소드는 new 키워드 만날 때
		//메모리에 올라간다.	
		sayHello();										//static이 붙은 것만 호출 가능 @@@@@
		//toSay("가나다");	
		
		//static이 붙어있는 메소드 안에는	
		//static이 붙어있는 메소드나 변수만 온다.
		//static이 없는 메소드 안에는
		//static이 붙은 변수나 메소드 올 수 있다.

		
		
		//static 붙어 있는 메소드 안에서
		//static 없는 메소드(=인스턴스 메소드)를 호출하고 싶으면
		//인스턴스를 만들고 나서 호출하면 됨
		//이런 걸 객체화라고 함 !!!(=자기 자신을 이용해 인스턴스 만들기)
		new HelloJava01_useCircle().toSay("이진용");
		
		HelloJava01_useCircle temp = new HelloJava01_useCircle();
		temp.toSay("김진혁");
	}
}









