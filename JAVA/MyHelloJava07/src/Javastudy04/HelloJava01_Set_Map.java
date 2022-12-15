package Javastudy04;

import java.util.*;

import Javastudy02.KBStudent;

public class HelloJava01_Set_Map {

	public static void main(String[] args) {
		// java에는 크게 List, Set, Map 3가지가 있다.
		
		// List도 ArrayList 말고도 다양한 종류가 있다.
		List<Integer> ex1 = new ArrayList<Integer>();
		List<Integer> ex2 = new LinkedList<Integer>();
		List<Integer> ex3 = new Stack<Integer>();		
		List<Integer> ex4 = new Vector<Integer>();
		//Queue<Integer> ex5 = new LinkedList<Integer>(); @@?
		
		
		//Map, Set
		
		//Map
		//Map은 면접 문제에 나옴
		//C#의 dictionary, python dict랑 같은 것(키값(key value))
		//Map에서 대표적인 것은 HashMap
		//    키(값)  value(값) -> 객체 타입이 들어갈 수 있음 @@?
		Map<Integer, String> students = new HashMap<Integer, String>();
		students.put(1, "안서준");
		students.put(2, "이동준");
			//(왼쪽이)key
		students.put(1, "이진용");	//키값이 겹치므로 기본값은 없어짐
		students.put(3, "이진용");	//1번 이진용과 3번 이진용은 다른 인물로 간주함
		for(int key : students.keySet()) {
			System.out.println(key);
			System.out.println(students.get(key));
		}
		//hash : 각자를 구분하는 고유값(혹은 고유 코드)
		//전화번호나 주민번호 같은 것들
		
		//요약
		// Map : 키와 값으로 값을 저장 관리하고, 키값이 중복되면
		// 기존 값은 삭제됨
		
		
		
		//Set
		//중복을 허용하지 않는 리스트
		//순서가 없음
		//먼저 들어간게 나중에 출력되기도 함
		Set<String> workers = new HashSet<String>();
		workers.add("김진혁");
		workers.add("최영은");
		workers.add("김진혁");
		workers.add("이동준");
		workers.add("이동준");
		System.out.println("---set Test---");
		
		for (String string : workers) {
			System.out.println(string);
		}
		
		KBStudent k1 = new KBStudent("이현민", "남", 30, 3);
		KBStudent k2 = new KBStudent("이현민", "남", 30, 3);
		//값이 같고 말고의 문제가 아니라 hashCode와 equals를 재정의 해줘야 @@?
		
		System.out.println(k1.equals(k2)); //번호를 기준으로 비교하면 같음
		
		
		Set<KBStudent> kbstudents = new HashSet<KBStudent>();
		kbstudents.add(k1); //중복된 값을 집어넣고 있다
		kbstudents.add(k2);
		//왜 둘 다 나오는 지..
		for (KBStudent kbStudent : kbstudents) {
			System.out.println(kbStudent);
		}
		
	}

}











