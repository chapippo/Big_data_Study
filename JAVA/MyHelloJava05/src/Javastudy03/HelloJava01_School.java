package Javastudy03;

public class HelloJava01_School {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Teacher t1 = new ProgramingTeacher();
		Teacher t2 = new MathTeacher();
		ProgramingTeacher t3 = new JavaProgramingTeacher();
		
		t1.Teach();
		t2.Teach();
		t3.Teach();
		
		
		Teacher temp = new Teacher() {
			@Override
			public void Teach() {
				// TODO Auto-generated method stub
				System.out.println("보건선생님입니다.");
			}
		};
		temp.Teach();		

	}
}






