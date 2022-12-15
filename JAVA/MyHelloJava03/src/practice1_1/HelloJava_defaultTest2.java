package practice1_1;

import practice1.Person;

public class HelloJava_defaultTest2 {

	public static void main(String[] args) {
		Person p = new Person();
		//p.name = "김보규";  : 오류발생
		//Person 클래스가 있는 패키지를 import 해도
		//default 는 패키지가 달라지면 private 처럼 움직임
		p.alias= "귀염둥이"; // : 정상작동
		//alias 속성은 
		//public 접근제한자이기 때문에
		//패키지가 다르면 import를 통해 접근 가능!

	}

}
