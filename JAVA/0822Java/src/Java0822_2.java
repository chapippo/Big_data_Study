import java.util.*;

class Clock {
	// 멤버 변수는 private으로
	private int hour;	// 시간
	private int min;	// 분
	private int sec;	// 초
	
	//public int getHour() {return this.hour;}
	//public int getMin() {return this.min;}
	//public int getSec() {return this.sec;}
	//public void setHour(int h) {this.hour = h;}
	//public void setMin(int m) {this.min = m;}
	//public void setSec(int s) {this.sec = s;}	
	
	//생성자 만들기(42줄까지 하고 난 뒤)
	//객체 생성할 때만 딱 한 번만 사용
	public Clock(int h, int m, int s) {
		this.hour = h;
		this.min = m;
		this.sec = s;	//멤버 변수 초기화
	}
	
	// 멤버 함수 만들기
	public void setTime(int h, int m, int s) {
		// 해당 함수가 호출되면 얼마든지 값을 변경 가능
		this.hour=h;
		this.min=m;
		this.sec=s;
	}
	
	public int getHour() {return this.hour;}
	public int getMin() {return this.min;}
	public int getSec() {return this.sec;}	// 이 함수를 통해서 시,분,초 반환
}


public class Java0822_2 {
	public static void main(String[] args) {		
		Scanner s = new Scanner(System.in);	
		// Clock 클래스에 대한 c1, c2 객체 생성
		// 생성자 통해서 현재 시각(시분초 모두) 초기화
		// c1, c2의 멤버 변수 값 동일하게 설정(하라고 했긴 때문에 변수 선언에서 해볼게) -> Scanner로 입력받기		
				
		System.out.println("현재 시각을 입력하세요.");
		
		// 현재 시각 입력받기
		int hour = s.nextInt();
		int min = s.nextInt();
		int sec = s.nextInt();
		
		// 입력값으로 멤버 변수 초기화하면서 객체 생성
		//Clock c1 = new Clock(s.nextInt(),s.nextInt(),s.nextInt());
		Clock c1 = new Clock(hour, min, sec);		
		//Clock c2 = new Clock(12,40,00);
		Clock c2 = new Clock(hour, min, sec);
		
		// c2 객체의 시분초 값을 점심시간으로 변경 -> 함수만들기ㅏ
		c2.setTime(16, 40, 30);
		
		
		// 멤버 함수 통해서 c1, c2 간 시간 차이 계산
		// 결과가 마이너스가 아니게끔 연산을 추가
		int sub_h = c2.getHour()-c1.getHour();
		int sub_m = c2.getMin()-c1.getMin();
		
		int sub_s = c2.getSec()-c1.getSec();	
		if(sub_s<0) {	//계산한 초의 결과가 마이너스일 때 (초부터 먼저 계산해야)
			sub_s = 60 + sub_s;
			sub_m--;
		}
		
		if(sub_m<0) {	//계산한 분의 결과가 마이너스일 때 (나중에 계산)
			sub_m = 60 + sub_m;
			sub_h--;
		}

		
		// 아래 양식처럼 출력 (문제 메모장 참고)
		System.out.println("현재 시각은 "+c1.getHour()+"시"+c1.getMin()+"분"+c1.getSec()+"초");
		System.out.println("종료 시간은 "+c2.getHour()+"시"+c2.getMin()+"분"+c2.getSec()+"초");
		
		
		
		System.out.print("종료 시간까지 남은 시간은 "+sub_h+"시 ");
	
		if(sub_m<10) {	// 분의 자릿수 맞추기
			System.out.print(0);
		}
		System.out.print(sub_m+"분 ");
		if(sub_s<10) {	// 초의 자릿수 맞추기
			System.out.print(0);
		}
		System.out.print(sub_s+"초");
		
		/*
		 * if((c2.getHour()-c1.getHour())>0) { System.out.println(""); }
		 * 
		 * if(sub_h>0) {
		 * System.out.print("점심시간까지 남은 시간은 "+sub_h+"시"+sub_m+"분"+sub_s+"초"); } else
		 * if(c1.getSec() < c2.getSec()) {
		 * System.out.print("점심시간까지 남은 시간은 "+sub_h+"시"+sub_m+"분"+sub_s+"초"); }
		 */	
	}
}




