import java.util.Scanner;

public class joon5613 {
	public static void main(String[] args) {
		// do-while / switch문 사용
		Scanner s = new Scanner(System.in);
		int a = s.nextInt();
		// a=1
		do {
			//변수 a를 중심으로 하여 연산이 진행됨		
			char c = s.next().charAt(0);	//연산자 입력 받기
			// c='+'
			if(c=='=') {break;}			
			int b = s.nextInt();	// 두번째 숫자 입력받기
			// b=1
			switch(c) {
			case '+' : a+=b;	break;
				// a+=b -> 1+1=2 -> a에 저장됨
			case '-' : a-=b;	break;
			case '*' : a*=b;	break;
			case '/' : a/=b;	break;
			case '%' : a%=b;	break;
			}
			// a=2 나오고 9열로 돌아감 그러고 연산자 =을 입력받으면서 while문 탈출
			// 그리고 a 출력
		}while(true);
		
		System.out.println(a);
		
		
		
		
		
		
		
		
			
			//int i = s.nextInt();
			//int result = a;
			//String b = s.next();
			//switch(b) {
			//case + : 
				//a + i = a;
			//case - :
				//a - i = a;
			//}			
			//String a = s.next();
		//}while();

	}
}