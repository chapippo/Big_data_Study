package Javastudy01;

import java.util.ArrayList;

public class HelloJava01_foodchoice {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Food f1 = new Food();
		f1.setName("Į����");
		f1.setPrice(6000);
		
		Food s1 = new Sushi();		
		if(s1 instanceof Sushi) {
			((Sushi) s1).setWasabiBrand("������ǰ");
		}
		
		Food e1 = new Emokase();
		if (e1 instanceof Emokase) {
			((Emokase) e1).setChoiceMenu("�ڽ�A");			
		}
		
		ArrayList<Food> FoodList = new ArrayList<Food>();
		FoodList.add(f1);
		FoodList.add(s1);
		FoodList.add(e1);
		
		for (Food food : FoodList) {
			food.eat();
			if(food instanceof Sushi)
				
		}

	}

}
