package Javastudy02;

import java.util.ArrayList;

public class HelloJava01_Sikdang {

	public static void main(String[] args) {
		
		//Food f = new Food();  ::  오류!!!
		//추상클래스 가지고는 인스턴스 못 만듦
		
		Food f = new Taco();
		Ramen r = new Ramen();
		Bibimbab b = new Bibimbab();
		
		f.eat();
		r.eat();
		b.eat();
		
		System.out.println("-----");
		
		ArrayList<Food> foods = new ArrayList<Food>();
		foods.add(f);
		foods.add(r);
		foods.add(b);
		//foods에 있는 음식들은 모두 eat을 호출할 수 있다!
		//또한! eat이 각각 다 다르게 구현되어 있다.		
		for (Food food : foods) {
			food.eat();
		}
		
		
		//익명클래스
		//Ramen 등과 다르게 이름이 아예 없는 클래스
		//temp에서만 쓰이는 클래스임 (여기에서만 쓰임) @@@
		Food temp = new Food() {
			@Override
			public void eat() {
				System.out.println("기도하고 먹는다.");				
			}
		};
		temp.setName("교회식당 밥");
		temp.eat();
		
		
		
		
		
		//딱 한 번 쓰일 거라면 새로운 클래스 만들 필요까지는 없으니
		//익명클래스 한 번으로 땡
		foods.add(temp);
		
		foods.add(new Food() {
			@Override
			public void eat() {
				System.out.println("묵상하고 먹는다.");
			}
		});
	}

}










