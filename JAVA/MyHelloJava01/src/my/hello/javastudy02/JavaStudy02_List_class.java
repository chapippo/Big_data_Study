package my.hello.javastudy02;

import java.util.ArrayList;

public class JavaStudy02_List_class {

	public static void main(String[] args) {
		//�迭, List ��� ���ڸ� �����ϰų�, ���ڿ��� �����ϴ� �� ����
		//��ü�� �����ϴ� �͵� �ȴ�@@@ 							��ü�� �����ϴ� �迭
		Student[] students = new Student[3];
		students[0] = new Student();
		//		new Ű���� + ������(Student)   �� ������ �ֱ� ����
		//               + Ŭ�������� �ݵ�� ����
		
		students[1] = new Student("������",22,1);
		Student s = new Student("������",30,2);
		students[2] = s;

		//new Ű���� �ǹ� 
		//Heap ������ �޸� �����ϰڴ�
		
		//int�� double ������ ���� ������ ������ �ٸ���.
		//1. newŰ���� + �����ڰ� �־������ ��ü ������
		//2. ������ �ȿ� ��쿡 ���� �Ű������� ���⵵ ��
		//													��ü�� �����ϴ� ArrayList
		ArrayList<Student> mystudents = new ArrayList<Student>();
		
		mystudents.add(new Student("������",60,5));
		mystudents.add(new Student());						//Ŭ���� �̿��ؼ� ���� ������ '��ü'��� �θ�
		Student ss = new Student("�ֿ���",45,4);	//ss��� ��ü ����(������ (������)�̿���) ���� ���� ����
		//�߻���			��üȭ
					//new Ű���� �̿��ؼ� ����
		//������???@@
		// ss��ü�� ���� �����ϴ� �� xxx �޸� ���� ��򰡿� �Ҵ� ooo
		
		
		
		
		mystudents.add(ss);		//������:��ǻ�� �޸𸮿� �����ϴϱ�, ���� ()�ȵ� ������
		
		
		//new Ű���� + ������
		//�ν��Ͻ�(Instance)��� �θ�!
		//Instance : (��ü��)����
		//Student�� Instance = Student�� ����
		//= �л��̶�� �߻��� ������ ��ü���� ���÷� ������ ��
		
		
		
		
		int ex; //ex�� �⺻������ ���� 0�� ��
		//s0�̶� s1�� �ƹ��͵� ����Ű�� ����
		//�� null���̴�.
		Student s0;
		Student s1 = null;	//�߻�ȭ �� �� ��üȭ ���� ���� !!
		mystudents.add(s1);
		students[0] = s1;
		
	}
}









