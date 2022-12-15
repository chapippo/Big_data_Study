package Javastudy07_05;

import java.util.ArrayList;

public class HelloJava01_PokemonWorld {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bulbasaur b = new Bulbasaur();
		Bulbasaur i = new Ivysaur();	//������ Ȱ�뵵 ��
		Venusaur v = new Venusaur();
		
		
		

		//�߻�Ŭ���� ���� �������̽� �̿��ؼ��� �͸� Ŭ���� ���� �� �ִ�.
		//����� �ռ� �����帰 ��ó��, �Ϲ����� Ŭ���������� �͸� Ŭ���� ������
		
		//Animalable��
		//��ī���� ���ο� ��ü�� ����
		Animalable p = new Animalable() {
			@Override
			public void Move() {
				// TODO Auto-generated method stub
				System.out.println("��������");
			}
			@Override
			public void Run() {
				// TODO Auto-generated method stub
				System.out.println("������ �پ��.");				
			}
			@Override
			public void Charming() {
				// TODO Auto-generated method stub
				System.out.println("���� ��ī��!");
			}			
		};
		
		ArrayList<Animalable> pokemons = new ArrayList<Animalable>();
		pokemons.add(b);
		pokemons.add(i);
		pokemons.add(v);
		pokemons.add(p);
		Venusaur megaVenu = new Venusaur() {
			@Override
			public void Grow() {
				// TODO Auto-generated method stub
				System.out.println("�ɸ�� ������ �ڶ���.");
			}
			@Override
			public void Charming() {
				// TODO Auto-generated method stub
				System.out.println("(�����췷����) �̻���~~��!");
			}
		};
		pokemons.add(megaVenu);
		
		
		for (Animalable animalable : pokemons) {
			animalable.Charming();			
		}
	}

}









