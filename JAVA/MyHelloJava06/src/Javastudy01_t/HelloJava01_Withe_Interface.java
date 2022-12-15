package Javastudy01_t;

import java.util.ArrayList;
import java.util.List;

public class HelloJava01_Withe_Interface {

	public static void main(String[] args) {
		//��ī��� �������ڸ��� �̸��� �־�� ��
		//����Ʈ �����ڰ� �����Ƿ�
		Pikachu p = new Pikachu("����");
		
		//����Ʈ ������ �̿��ؼ� �ٷ� �ν��Ͻ� ���� ����
		Bulbasaur b = new Bulbasaur();
		Squirtle s = new Squirtle();
		
		//Animalable�� �����ϴ� �͸�Ŭ����. ���⼱ �������� �������.
		//(�������̽��ε� ���� �� ����)
		Animalable d = new Animalable() {
			@Override
			public void charming() {
				System.out.println("�۸� ¢�´�~");
			}
		};
		d.sleep();
		
		Plantable myp = new Plantable() {
			@Override
			public void grow() {
				System.out.println("LG Ʒ���迡�� �ڶ�� �� ��.");				
			}
		};
		
		Pokemonable g = new Pokemonable() {
			@Override
			public void charming() {
				System.out.println("�źϼҿ���~");
			}
			@Override
			public void grow() {
				System.out.println("�ٴٿ��� �ڶ���.");
				
			}
			@Override
			public void fight() {
				System.out.println("�źϼ� ����!");				
			}			
		};
		
		
		//ArrayList�� List��� �������̽��� ��ӹ��� Ŭ�����̴� @@@
		ArrayList<Integer> numbers = new ArrayList<Integer>();		
		List<Integer> ns = new ArrayList<Integer>();
		
		
		
		
		
		// @@@ try catch ���� - java, c#���� ���� ����
		//try�� ������ �κ��� ������ ���� catch �κ����� �Ѿ��
		//���α׷��� ������� �ʴ´�.(try catch �� �� ���¼� �������� �״�� �����)
		try {
			//���� ���� �̽��� �ذ��� ���� - Cloneable �̶�� �������̽� ���
			Pikachu pipi = (Pikachu)p.clone();
			pipi.setName("����׋���");		
			//p�� �̸��� �����ε�,,? �� pipi�� ����׶��̷� �ٲٴ� p�� �ٲ�� ����?		
			//���� : pipi�� p�� �Ȱ��� ��ġ�� �����ϱ� �����̴�.(�����Ͷ� ����)
			
			//(�ϳ��� �ٲ�� �ϰ� ������ ���޾Ƽ� �ٲ�� �ϰ� ���� �ʾ�(���������̽�) -> �̷� �� Cloneable ���)
			//(Pikachu Ŭ������ ���� Cloneable)
			System.out.println(p.getName());
			System.out.println(pipi.getName());
		} catch (Exception e) {
		}
		
		
		
		
		//����
		//���߸� ��
		//�޼ҵ尡 �ϳ� �ִ� �������̽��� ���ؼ� ������
		//�͸� Ŭ������ ���� ��
		
		//Plantable�� grow�� �������̵��� ��
		//�̰� ȭ��ǥ ���·� �ٿ����� �� = ����
		//lambda
		Plantable myFlower = () -> {
			System.out.println("�������� �ڶ󳪿�");
		};
		myFlower.grow();
		
//		s.sleep();
		

	}

}














