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
		System.out.println("이클립스냐 인텔리제이냐..");
		System.out.println(getName()+"쌤의 "+getMajor()+"강의");
	}

}
