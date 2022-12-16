import java.util.Scanner;

public class Main03 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		//10818번 답안
		
		int num = s.nextInt();	//입력값 개수
		int input[] = new int[num]; //동적할당
		for(int i = 0 ; i < num ; i++) {
			input[i] = s.nextInt();	//값 하나씩 입력받음
		}
		
		int max = input[0];	//최대값 저장
		int min = input[0];	//최소값 저장
		for(int i = 0; i<num;i++) {
			if(max < input[i]) { //35가 20보다 크니 갱신
				max = input[i];
			}
			if(min > input[i]) {
				min = input[i];
			}			
		}
		
		System.out.println(min+" "+max);
		
	}	
}
