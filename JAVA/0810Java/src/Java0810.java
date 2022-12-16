
//사칙연산에 사용할 계산기 프로그램
class Cal { // 부수적인 클래스 : 필요할 때만 사용되는 클래스\
	// 접근 제어자 없이 멤버를 선언하면 public으로 자동으로 선언이 됌
	private int num1; // 멤버 변수 (필드)
	private int num2;

	// 생성자 : 메소드 중 하나이지만, 클래스명과 반드시 동일해야함
	// 생성자는 반드시 public으로 설정해야함
	public Cal() {
		this.num1 = 1;
		this.num2 = 2;
	}

	public Cal(int n1, int n2) {
		// 보통 멤버 변수를 초기화하는 데에 많이 쓰임
		this.num1 = n1;
		this.num2 = n2;
	}
	// 오버로딩 : 매개변수의 구성이 다르면 같은 이름의 메소드라도 함께 사용 가능

	// set() : 특정 값을 변경하는 메소드
	// get() : 특정 값을 결과값으로 반환하는 메소드
	public void setNum1(int n) {
		this.num1 = n;
	}

	public int getNum1() {
		return num1;
	}

	public void setNum2(int n) {
		this.num2 = n;
	}

	public int setNum2() {
		return num2;
	}

	public int sum() {
		return num1 + num2;
	} // 멤버 함수 (메소드)

	public int sub() {
		return num1 - num2;
	}

	public int mul() {
		return num1 * num2;
	}

	public int div() {
		return num1 / num2;
	}

	public int rest() {
		return num1 % num2;
	}
}

public class Java0810 { // 대표 클래스 : 이 클래스를 위주로 실행이 됌
	public static void main(String args[]) {
		Cal c1 = new Cal();
		Cal c2 = new Cal(2, 3);
		c1.setNum1(1); // c1의 num1을 1로 설정한다.
		c2.setNum1(2); // c2의 num1을 2로 설정한다.
		System.out.println("c1의 첫번째 숫자는 " + c1.getNum1());
		System.out.println("c2의 첫번째 숫자는 " + c2.getNum1());

	}
}
