package Javastudy02;

public abstract class Animal {
	private String Name;
	private int Age;	
	
	public String getName() {return Name;}
	public void setName(String name) {Name = name;}
	public int getAge() {return Age;}
	public void setAge(int age) {Age = age;}
	
	public Animal(String name, int age) {
		super();
		Name = name;
		Age = age;
	}
	
	public void sleep() {		
	}

}
