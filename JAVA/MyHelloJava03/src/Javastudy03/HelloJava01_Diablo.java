package Javastudy03;

import java.util.*;

public class HelloJava01_Diablo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("�� �ο� : "+GameCharacter.getCount());	//0
		GameCharacter g1 = new GameCharacter();
		System.out.println("�� �ο� : "+GameCharacter.getCount());	//1		
		g1.set_Class("��ũ����");
		g1.setId("��ũ��ũ����");
		
		GameCharacter g2 = new GameCharacter("�ְ�������","�߱�������");
		System.out.println("�� �ο� : "+GameCharacter.getCount());
		GameCharacter g3 = new GameCharacter();
		g3.set_Class("���Ʊ���");
		g3.setId("�����޼����������");
		g3.setLevel(34);
		System.out.println("�� �ο� : "+GameCharacter.getCount());
		
		GameCharacter.sayHello();	//����
		g1.attack();	//������ ���� �ٸ� ������ ����Ѵ�.
		g2.attack();
		g3.attack();
		
		
		
//		Scanner s = new Scanner(System.in);
//		ArrayList<Integer> GameCharacter = new ArrayList<Integer>();		
//		int count = s.nextInt();		
//		GameCharacter[] GC_arr = new GameCharacter[count];
//		
//		System.out.println("id��?");
//		String Id = s.nextLine();
//		System.out.println("������?");
		

	}

}





