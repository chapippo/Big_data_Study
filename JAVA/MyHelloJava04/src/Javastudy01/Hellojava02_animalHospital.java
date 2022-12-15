package Javastudy01;

import java.util.ArrayList;

public class Hellojava02_animalHospital {

	public static void main(String[] args) {

		ArrayList<Animal> animalHospital = new ArrayList<Animal>();
//		Animal a1 = new Animal();
//		a1.setName("고양이");
//		a1.setAge(5);
//		animalHospital.add(a1);
//		
//		Dog d = new Dog();
//		d.setName("누렁이");
//		d.setAge(7);
//		d.setHairColor("노란색");
//		animalHospital.add(d);
//		
//		Cat c = new Cat();
//		c.setName("나비");
//		c.setAge(6);
//		c.setEyeColor("하늘색");
//		animalHospital.add(c);		
		Animal a1 = new Animal();
		Animal a2 = new Dog();	//Dog a2 = new Dog(); <-이거도 됨
		Cat a3 = new Cat();
		
		if(a2 instanceof Dog)
			((Dog) a2).setHairColor("흰색");
		
		a3.setEyeColor("호박색");
		
		
		animalHospital.add(a1);
		animalHospital.add(a2);
		animalHospital.add(a3);
				
		
		for (Animal animal : animalHospital) {
			animal.Sleep();
			if(animal instanceof Dog)
				((Dog) animal).bark();
			else if(animal instanceof Cat)
				((Cat) animal).meow();	
			System.out.println("-----");
		}		

	}

}
