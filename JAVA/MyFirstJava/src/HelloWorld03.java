import java.util.Scanner;

public class HelloWorld03 {
	public static void main(String args[]) {
		Scanner s=new Scanner(System.in);
		int num = s.nextInt(); //학생수부터 입력받음
		
		int score[] = new int [num]; //입력 받을 점수를 학생의 크기[num]만큼 받는다
				
		int sum = 0; //총합을 저장하는 변수
		for(int i = 0 ; i < num ; i++) {
			score[i] = s.nextInt();
			sum += score[i];
		}
				
		for(int i = 0 ; i < num ; i++) {
			System.out.print(score[i]+ " ");
		}
		System.out.println("합계는 "+sum);
		
		
		
		
		int b = 4;
		int a = 3;
		System.out.println(a+" "+b);
		
	}
}
