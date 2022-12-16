import java.util.Scanner;

public class example {
	public static void main(String args[]) {
		Scanner s=new Scanner(System.in);
		// switch문 : 학점 계산
				char score=s.next().charAt(0);	// A B C D ...
				double number;
				switch(score) {
				case 'A':	number=4;	break;
				case 'B':	number=3;	break;
				case 'C':	number=2;	break;
				case 'D':	number=1;	break;
				default:	number=0;	break;	// 위 조건을 모두 만족하지 못하는 F
				}
				System.out.println(number);
	}
}
