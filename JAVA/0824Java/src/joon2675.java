import java.util.Scanner;

public class joon2675 {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int T=s.nextInt();	//테스트 갯수
		
		for(int i=0;i<T;i++) {
			int R=s.nextInt();		//반복 횟수
			String S = s.next();	//입력하는 문자열
			char[] arr = S.toCharArray();			
			for(int j=0;j<S.length();j++) {	//배열의 길이만큼 반복
				for(int k=0;k<R;k++) {
					System.out.print(S.charAt(j));
				}				
			}
			System.out.println();
		}
	}
}
