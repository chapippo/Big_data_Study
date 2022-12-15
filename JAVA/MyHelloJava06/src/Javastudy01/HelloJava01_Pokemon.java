package Javastudy01;

import java.util.ArrayList;

public class HelloJava01_Pokemon {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bulbasaur b = new Bulbasaur();
		Charmander c = new Charmander();
		Squirtle s = new Squirtle();
		
		ArrayList<Animalable> pokemons = new ArrayList<Animalable>();
		pokemons.add(b);
		pokemons.add(c);
		pokemons.add(s);
		
		Charmander charizard = new Charmander() {
			@Override
			public void Charming() {
				// TODO Auto-generated method stub
//				super.charming();
				System.out.println("¸®ÀÚ¸ù~");
			}
			@Override
			public void Fight() {
				// TODO Auto-generated method stub
//				super.fight();
				System.out.println("È­¿°¹æ»ç!");
			}
		};
		pokemons.add(charizard);
		
		for (Animalable animalable : pokemons) {
			animalable.Charming();			
		}
		

	}

}
