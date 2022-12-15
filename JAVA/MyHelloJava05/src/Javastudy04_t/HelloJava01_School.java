package Javastudy04_t;

public class HelloJava01_School {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Teacher t = new MathTeacher();
		MathTeacher m = new MathTeacher();
		ProgramingTeacher p = new ProgramingTeacher();
		JavaProgramingTeacher j = new JavaProgramingTeacher("이동준","임베디드");
		
		t.Teach();
		m.Teach();
		p.Teach();
		j.Teach();
		
		//익명 클래스
		Teacher t2 = new Teacher() {
			@Override
			public void Teach() {
				// TODO Auto-generated method stub
				System.out.println("물리적 폭력과 함께 물리 강의");
			}
		};
		t2.Teach();
		
		//익명 클래스
		ProgramingTeacher p2 = new ProgramingTeacher() {
			public void Teach() {
				System.out.println(getName()+"쌤이 C 언어 가르쳐드립니다.");
			}
		};
		p2.setName("이동준");
		p2.Teach();

	}

}










