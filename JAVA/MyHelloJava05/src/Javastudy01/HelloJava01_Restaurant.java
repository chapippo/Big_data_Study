package Javastudy01;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava01_Restaurant {

	public static void main(String[] args) {
		
		Food_sol f = new Food_sol("비빔밥");	//() 안에 "" argument를 :써줘야 됨
		Sushi_sol s = new Sushi_sol("연어초밥",10000,"녹색와사비");
		//e는 Food 대신 Emokase라고 해도
		//Food타입 ArrayList나 배열에 들어감
		//이걸 굳이 쓴 이유는 다형성 보여줄려고..
		Food_sol e = new Emokase_sol("곱창전골",20000);
		
		
		//Food_sol()나 Sushi_sol()나 Emokase_sol() 이렇게 비어있는
		//생성자를 못 만드는 이유는 Food_sol에 매개변수가 없는 생성자는
		//없기 때문이다.
		
		ArrayList<Food_sol> foods = new ArrayList<Food_sol>();
		f.setPrice(1000);
		foods.add(f);
		foods.add(s);
		foods.add(e);
		
		//Scanner도 보다시피 클래스다
		//생성자가 있으며 매개변수도 있다.
		//System 클래스 안에 있는 in은 클래스 변수 @@@@@
		Scanner scan = new Scanner(System.in);
		
		//무한루프
		while(true) {
			System.out.println("어떤 음식 추가할래?");
			String name = scan.nextLine();			
			Food_sol temp;
			if(name.equals("스시") || name.equals("Sushi")) { //String 비교시에 equals 사용
				System.out.println("얼마야?");
				int price = scan.nextInt();
				scan.nextLine();	//hasNextLine xx
				System.out.println("무슨 초밥?");
				String Sushiname = scan.nextLine();
				System.out.println("무슨 와사비?");
				String wasabi = scan.nextLine();
				temp = new Sushi_sol(Sushiname, price, wasabi);
				foods.add(temp);
			}
			else if(name.equals("이모카세") || name.equals("Emokase")) { //String 비교시에 equals 사용
				System.out.println("얼마야?");
				int price = scan.nextInt();
				scan.nextLine();	//hasNextLine xx
				System.out.println("메뉴명은?");
				String menu = scan.nextLine();
				temp = new Emokase_sol(menu, price);
				foods.add(temp);
			}
			else {
				if(name.equals("exit")) {
					System.out.println("추가 종료");
					break;
				}
				else {
					System.out.println("얼마야?");
					int price = scan.nextInt();
					scan.nextLine();	//hasNextLine xx
					System.out.println("메뉴명은?");
					String menu = scan.nextLine();
					temp = new Emokase_sol(menu, price);
					foods.add(temp);
				}
			}
		}
		for (Food_sol food : foods) {
			food.eat();
			if(food instanceof Emokase_sol)
			{
				((Emokase_sol) food).sayEmo();
//				System.out.println("메뉴뭔데?");
//				String menu = scan.nextLine();
//				System.out.println(((Emokase_sol) food).choiceMenu(menu));
			}
		}
	}
}











