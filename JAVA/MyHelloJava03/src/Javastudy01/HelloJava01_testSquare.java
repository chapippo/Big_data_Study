package Javastudy01;

public class HelloJava01_testSquare {

	public static void main(String[] args) {
		Square_sol s1 = new Square_sol();
		
		s1.setWh(-1);	//잘못된 값
		System.out.println(s1.getWh());//get은 읽어오는거
		
		s1.setWh(10);	//제대로된 값
		System.out.println(s1.getWh());
		
		//인스턴스에 '-50'을 넣었을 때 값이 '-50'으로 그대로 나옴
		//양수만을 원함
		//그래서 생성자 부분을 수정 !!!
		Square_sol s2 = new Square_sol(-50);
		System.out.println(s2.getWh());
	}
}
