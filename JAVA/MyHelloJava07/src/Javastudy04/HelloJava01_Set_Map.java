package Javastudy04;

import java.util.*;

import Javastudy02.KBStudent;

public class HelloJava01_Set_Map {

	public static void main(String[] args) {
		// java���� ũ�� List, Set, Map 3������ �ִ�.
		
		// List�� ArrayList ���� �پ��� ������ �ִ�.
		List<Integer> ex1 = new ArrayList<Integer>();
		List<Integer> ex2 = new LinkedList<Integer>();
		List<Integer> ex3 = new Stack<Integer>();		
		List<Integer> ex4 = new Vector<Integer>();
		//Queue<Integer> ex5 = new LinkedList<Integer>(); @@?
		
		
		//Map, Set
		
		//Map
		//Map�� ���� ������ ����
		//C#�� dictionary, python dict�� ���� ��(Ű��(key value))
		//Map���� ��ǥ���� ���� HashMap
		//    Ű(��)  value(��) -> ��ü Ÿ���� �� �� ���� @@?
		Map<Integer, String> students = new HashMap<Integer, String>();
		students.put(1, "�ȼ���");
		students.put(2, "�̵���");
			//(������)key
		students.put(1, "������");	//Ű���� ��ġ�Ƿ� �⺻���� ������
		students.put(3, "������");	//1�� ������� 3�� �������� �ٸ� �ι��� ������
		for(int key : students.keySet()) {
			System.out.println(key);
			System.out.println(students.get(key));
		}
		//hash : ���ڸ� �����ϴ� ������(Ȥ�� ���� �ڵ�)
		//��ȭ��ȣ�� �ֹι�ȣ ���� �͵�
		
		//���
		// Map : Ű�� ������ ���� ���� �����ϰ�, Ű���� �ߺ��Ǹ�
		// ���� ���� ������
		
		
		
		//Set
		//�ߺ��� ������� �ʴ� ����Ʈ
		//������ ����
		//���� ���� ���߿� ��µǱ⵵ ��
		Set<String> workers = new HashSet<String>();
		workers.add("������");
		workers.add("�ֿ���");
		workers.add("������");
		workers.add("�̵���");
		workers.add("�̵���");
		System.out.println("---set Test---");
		
		for (String string : workers) {
			System.out.println(string);
		}
		
		KBStudent k1 = new KBStudent("������", "��", 30, 3);
		KBStudent k2 = new KBStudent("������", "��", 30, 3);
		//���� ���� ������ ������ �ƴ϶� hashCode�� equals�� ������ ����� @@?
		
		System.out.println(k1.equals(k2)); //��ȣ�� �������� ���ϸ� ����
		
		
		Set<KBStudent> kbstudents = new HashSet<KBStudent>();
		kbstudents.add(k1); //�ߺ��� ���� ����ְ� �ִ�
		kbstudents.add(k2);
		//�� �� �� ������ ��..
		for (KBStudent kbStudent : kbstudents) {
			System.out.println(kbStudent);
		}
		
	}

}











