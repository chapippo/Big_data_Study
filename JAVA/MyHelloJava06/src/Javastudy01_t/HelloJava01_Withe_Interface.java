package Javastudy01_t;

import java.util.ArrayList;
import java.util.List;

public class HelloJava01_Withe_Interface {

	public static void main(String[] args) {
		//피카츄는 생성하자마자 이름이 있어야 함
		//디폴트 생성자가 없으므로
		Pikachu p = new Pikachu("레옹");
		
		//디폴트 생성자 이용해서 바로 인스턴스 생성 가능
		Bulbasaur b = new Bulbasaur();
		Squirtle s = new Squirtle();
		
		//Animalable을 구현하는 익명클래스. 여기선 강아지를 만들었다.
		//(인터페이스로도 만들 수 있음)
		Animalable d = new Animalable() {
			@Override
			public void charming() {
				System.out.println("멍멍 짖는다~");
			}
		};
		d.sleep();
		
		Plantable myp = new Plantable() {
			@Override
			public void grow() {
				System.out.println("LG 틔운기계에서 자라는 내 꽃.");				
			}
		};
		
		Pokemonable g = new Pokemonable() {
			@Override
			public void charming() {
				System.out.println("거북소오온~");
			}
			@Override
			public void grow() {
				System.out.println("바다에서 자란다.");
				
			}
			@Override
			public void fight() {
				System.out.println("거북손 공격!");				
			}			
		};
		
		
		//ArrayList는 List라는 인터페이스를 상속받은 클래스이다 @@@
		ArrayList<Integer> numbers = new ArrayList<Integer>();		
		List<Integer> ns = new ArrayList<Integer>();
		
		
		
		
		
		// @@@ try catch 문법 - java, c#에서 자주 쓰임
		//try로 지정된 부분이 오류가 나면 catch 부분으로 넘어가고
		//프로그램이 종료되진 않는다.(try catch 안 한 상태서 오류나면 그대로 종료됨)
		try {
			//얕은 복사 이슈를 해결할 열쇠 - Cloneable 이라는 인터페이스 사용
			Pikachu pipi = (Pikachu)p.clone();
			pipi.setName("노란뚱떙이");		
			//p의 이름은 레옹인데,,? 왜 pipi를 노란뚱땡이로 바꾸니 p도 바뀌는 거지?		
			//이유 : pipi랑 p랑 똑같은 위치를 참조하기 때문이다.(포인터랑 유사)
			
			//(하나만 바뀌게 하고 싶은데 덩달아서 바뀌게 하고 싶지 않아(얕은복사이슈) -> 이럴 때 Cloneable 사용)
			//(Pikachu 클래스로 가서 Cloneable)
			System.out.println(p.getName());
			System.out.println(pipi.getName());
		} catch (Exception e) {
		}
		
		
		
		
		//람다
		//간추린 것
		//메소드가 하나 있는 인터페이스에 대해서 가능함
		//익명 클래스를 줄인 것
		
		//Plantable의 grow를 오버라이딩한 것
		//이걸 화살표 형태로 줄여버린 것 = 람다
		//lambda
		Plantable myFlower = () -> {
			System.out.println("무럭무럭 자라나요");
		};
		myFlower.grow();
		
//		s.sleep();
		

	}

}














