package Javastudy04_t;

public class JavaProgramingTeacher extends ProgramingTeacher {
	
	public JavaProgramingTeacher(String Name, String Major) {
		setName(Name);
		setMajor(Major);
	}
	
	@Override
	public void Teach() {
		// TODO Auto-generated method stub
//		super.Teach();
		System.out.println("��Ŭ������ ���ڸ����̳�..");
		System.out.println(getName()+"���� "+getMajor()+"����");
	}

}
