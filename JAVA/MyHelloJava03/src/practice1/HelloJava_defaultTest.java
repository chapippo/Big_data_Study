package practice1;

public class HelloJava_defaultTest {

	public static void main(String[] args) {

		//같은 패키지 안에서는 
		//접근제한자(public protected private)를
		//표기하지 않으면 public처럼 동작함
		Person p = new Person();
		p.name="김보규";
		p.age=5;
		p.sNum="2012";
	}
}
