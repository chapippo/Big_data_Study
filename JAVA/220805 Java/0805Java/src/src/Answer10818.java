import java.util.Scanner;

public class Answer10818 {
	public static void main(String args[]) {
		Scanner s=new Scanner(System.in);
		//10818번 답안
		
		int num=s.nextInt();  //입력값 개수
		int input[]=new int [num];
		for(int i=0;i<num;i++) {
			input[i]=s.nextInt();	//값 하나씩 입력받음
		}
		
		int max=input[0];	// 최댓값 저장
		int min=input[0];	// 최솟값 저장
		for(int i=0;i<num;i++) {
			if(max<input[i]) {max=input[i];}
			if(min>input[i]) {min=input[i];}
		}
		
		System.out.println(min+" "+max);
	}
}
