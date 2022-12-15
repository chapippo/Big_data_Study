package Javastudy01;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava01_Restaurant {

	public static void main(String[] args) {
		
		Food_sol f = new Food_sol("�����");	//() �ȿ� "" argument�� :����� ��
		Sushi_sol s = new Sushi_sol("�����ʹ�",10000,"����ͻ��");
		//e�� Food ��� Emokase��� �ص�
		//FoodŸ�� ArrayList�� �迭�� ��
		//�̰� ���� �� ������ ������ �����ٷ���..
		Food_sol e = new Emokase_sol("��â����",20000);
		
		
		//Food_sol()�� Sushi_sol()�� Emokase_sol() �̷��� ����ִ�
		//�����ڸ� �� ����� ������ Food_sol�� �Ű������� ���� �����ڴ�
		//���� �����̴�.
		
		ArrayList<Food_sol> foods = new ArrayList<Food_sol>();
		f.setPrice(1000);
		foods.add(f);
		foods.add(s);
		foods.add(e);
		
		//Scanner�� ���ٽ��� Ŭ������
		//�����ڰ� ������ �Ű������� �ִ�.
		//System Ŭ���� �ȿ� �ִ� in�� Ŭ���� ���� @@@@@
		Scanner scan = new Scanner(System.in);
		
		//���ѷ���
		while(true) {
			System.out.println("� ���� �߰��ҷ�?");
			String name = scan.nextLine();			
			Food_sol temp;
			if(name.equals("����") || name.equals("Sushi")) { //String �񱳽ÿ� equals ���
				System.out.println("�󸶾�?");
				int price = scan.nextInt();
				scan.nextLine();	//hasNextLine xx
				System.out.println("���� �ʹ�?");
				String Sushiname = scan.nextLine();
				System.out.println("���� �ͻ��?");
				String wasabi = scan.nextLine();
				temp = new Sushi_sol(Sushiname, price, wasabi);
				foods.add(temp);
			}
			else if(name.equals("�̸�ī��") || name.equals("Emokase")) { //String �񱳽ÿ� equals ���
				System.out.println("�󸶾�?");
				int price = scan.nextInt();
				scan.nextLine();	//hasNextLine xx
				System.out.println("�޴�����?");
				String menu = scan.nextLine();
				temp = new Emokase_sol(menu, price);
				foods.add(temp);
			}
			else {
				if(name.equals("exit")) {
					System.out.println("�߰� ����");
					break;
				}
				else {
					System.out.println("�󸶾�?");
					int price = scan.nextInt();
					scan.nextLine();	//hasNextLine xx
					System.out.println("�޴�����?");
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
//				System.out.println("�޴�����?");
//				String menu = scan.nextLine();
//				System.out.println(((Emokase_sol) food).choiceMenu(menu));
			}
		}
	}
}











