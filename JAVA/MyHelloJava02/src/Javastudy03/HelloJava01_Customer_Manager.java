package Javastudy03;

import java.util.Random;

public class HelloJava01_Customer_Manager {

	public static void main(String[] args) {
		
		//class�� �̿��ؼ� ������ ������ ��
		//�ݵ�� new Ű���尡 �ʿ��ϴ�. @@@@@@@
		
		//�ֳĸ� ����� ���� �ڷ����� �Ϲ����� �ڷ����� �ƴϱ� ����!
		//�׷��� �޸𸮸� ���� �Ҵ������ ��
		//new Ű����  = �޸� �Ҵ� Ű���� = c�� malloc�̶� ����   @@@@@
		
		// * Integer�� ���� �̹� �����ϴ� ��ü�鵵
		//new Ű���带 �Ἥ �޸� �Ҵ��ϱ�� �Ѵ�.
		Integer i = new Integer(5);
		Random r = new Random();
		//�ٸ� Customeró�� ������ ���� �� '������' �Ҵ��ؾ� ��
		//Random�̳� ��� �ڹٿ��� ������� Ŭ�����鵵
		//new Ű���� �̿��ؼ� �޸� �Ҵ��϶�� ������ �Ǿ� �ִ�.
		
		//new �ڿ� ���� Ŭ������ ()�� �ǹ�
		//�޸𸮸� �Ҵ��ϱ�� �ϴµ�, ��ŭ, � ���·� �Ҵ����� �����ִ� �� !!
		
		//Customer ���·� �Ҵ���
		//���⿣ �ּ� 1���� int�� 2���� String�� �� �� �ִ� 
		//������ �ʿ��ϴ�.
		
		//�׸��� c1��
		//c�� �����Ϳ� ������ ����.
		
		//���!!
		//���� ���� class�� ��� Ÿ���� ��������
		//new Ű����� Ŭ�������� �̿��ؼ� ��������� ��!!!
		//�Ʒ��� c2ó�� �׳� �����ϸ� �� �ǰ�
		//c1ó�� newŰ���� + Ŭ�������� �ʿ��ϴ�
		// Ŭ������ ������ = new Ŭ������();
		
		
		//Ŭ���� �̿��ؼ� ������ ������ Ŭ���� ��ü��
		//��ü(object)��� �θ���.
		Customer c1 = new Customer();	//Ư���� ������ �ڷ����̱� ������ new Ű����� �޸� �Ҵ�����
		c1.name = "������";
		c1.age = 30;
		c1.cNum = "00001";
		
		Customer c2;
		//c2.name = "�̵���";
		//c2.age = 34;
		//c2.cNum = "00000";
		
//		KBCustomer kb1 = new KBCustomer();
//		kb1.age=100;	//is not visible , ������ ����
		
		KBCustomer k1 = new KBCustomer();
		k1.setAge(34);
		k1.setName("�̵���");
		k1.setcNum("00000");
		
		System.out.println(k1.getAge());
		System.out.println(k1.getName());
		System.out.println(k1.getcNum());
		
		
		
	}

}







