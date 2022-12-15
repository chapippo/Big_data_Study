package com.myjsp.myjava;

public class Customer {
	private String name;
	private int age;
	private String id;
	
	public Customer(String name, int age, String id) {
//		super();
		this.name = name;
		this.age = age;
		this.id = id;
	}
	
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return "이름: "+name+", 나이: "+age+", ID: "+id;
	}
	
//	@Override
//	public boolean equals(Object obj) {
//		// TODO Auto-generated method stub
//		return super.equals(obj);
//	}
	
}
