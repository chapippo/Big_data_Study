package Javastudy04;

import java.util.*;

public class HelloJava01_Circle {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Circle c1 = new Circle();	//기존에 있던 Circle 생성자가 불러와짐
//		c1.setR(3);
		System.out.println("반지름의 값을 입력하세요");
		int r1 = s.nextInt();
		c1.setR(r1);
		System.out.println(c1.getArea());
		System.out.println(c1.getRound());
		
		
		Circle c2 = new Circle();	//처음 만들어질때 반지름 값을 알 수도 있지만 
		c2.setR(-3);
		System.out.println(c2.getArea());
		System.out.println(c2.getRound());
		
		if(c2.getArea() != 0) {
			System.out.println(c2.getArea());
		}
		else {
			System.out.println("c2 반지름 확인 다시해요.");
		}
		
		
		
		
		//오버로딩 @@@
		//원을 만들자마자 넓이 등을 구할 수 있다.
		Circle m1 = new Circle(4);
		if(m1.getArea() != 0)
			System.out.println(m1.getArea());
		System.out.println(new Circle(5).getArea());
		// 참고 * getRound 했을 때, 00002 이렇게 나온 건
		//고정소수점(소수점 고정)과
		//부동소수점(소수점이 고정이 아님) 이슈 때문,
		//디지털 세계에서 실수를 완벽하게 표현할 수 없고
		//그에 따른 오차 때문에 생긴 문제다.

	}

}
