
class Person{
	private String name;
	private int age;
	
	public Person(String n, int a) {
		this.name=n;
		this.age=a;
	}
	
	public void setName(String n) {this.name=n;}
	public String getName() {return this.name;}
	public void setAge(int a) {this.age=a;}
	public int getAge() {return this.age;}
}

class Student extends Person{
	private String school;
	
	public Student(String n, int a, String s) {
		super(n,a);
		this.school=s;
	}
	
	public void setSchool(String s) {this.school=s;}
	public String getSchool() {return this.school;}
	
	public void Print_S() {
		System.out.println("학생 정보");
		System.out.println("이름 : "+this.getName());
		System.out.println("나이 : "+this.getAge());
		System.out.println("학교 : "+this.school);
	}
}

class Teacher extends Person{
	public String team;
	
	public Teacher(String n, int a, String t) {
		super(n,a);
		this.team=t;
	}
	
	public void setTeam(String t) {this.team=t;}
	public String getTeam() {return this.team;}
	
	public void Print_T() {
		System.out.println("앞사람 정보");
		System.out.println("이름 : "+this.getName());
		System.out.println("나이 : "+this.getAge());
		System.out.println("소속 : "+this.team);
	}
}
public class Java0823_heri {

	public static void main(String[] args) {
		//Scanner s = new Scanner(System.in);
		
		Student s1=new Student("차승화",30,"KB");
		Teacher t1=new Teacher("이용희",28,"경북산업직업전문학교");		
		
		s1.Print_S();
		System.out.println();
		t1.Print_T();
	}
}
