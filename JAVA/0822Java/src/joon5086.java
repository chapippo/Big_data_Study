import java.util.Scanner;

public class joon5086 {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		while(true) {
			int a = s.nextInt();
			int b = s.nextInt();
			if(a==0 && b==0) {break;}
			
			// 나머지 연산자 사용
			// "첫번째 숫자가 두번째 숫자의 배수이다."
			if(a % b == 0) {
				System.out.println("multiple");				
			}
			// "첫번째 숫자가 두번째 숫자의 약수이다."
			// "두번째 숫자가 첫번째 숫자의 배수이다."
			else if(b % a == 0) {
				System.out.println("factor");
			}
			// 그 어느것도 아닌 경우
			else {
				System.out.println("neither");
			}
		}
	}
}