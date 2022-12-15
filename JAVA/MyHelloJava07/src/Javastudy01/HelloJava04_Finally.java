package Javastudy01;

public class HelloJava04_Finally {

	public static void main(String[] args) {
		// finally : 마침내
		// try catch 구문에서
		// catch에서 무슨 짓을 하던 간에 finally 부분은 반드시 실행한다
		
		int a=0,b=0,c=0,d=0;
		try {
			a = 10;
			c = a/b;
		} catch (Exception e) {
			System.out.println("잘못됨");
			return;	//프로그램 종료(되고 하단에 syso 실행 안 됨)
		} finally {	//finally는
			//데이터 연동시에 많이 쓰임
			//DB 연결하는 과정에서나 쿼리문 날릴 때 예외가 생기면
			//finally 부분에 DB접속 끊는 코드를 입력함
			//그래서! 문제 생기면 바로 DB부터 무조건 끊을 수 있도록 한다.
			//
			//catch에 걸려도 이 부분은 무조건 실행함
						
			System.out.println("이 부분은 실행 안 될 수도 있다.");			
		}
		System.out.println("여긴 실행 안 됨.");
	}
}






