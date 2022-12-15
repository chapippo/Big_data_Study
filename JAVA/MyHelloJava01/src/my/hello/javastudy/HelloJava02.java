package my.hello.javastudy;

import java.util.Arrays;
import java.util.Scanner;

public class HelloJava02 {
	
	public static void main(String[] args) {
		//1. 당첨 번호를 몇 번 뽑아낼지 입력받기
		Scanner s = new Scanner(System.in);
		int count = s.nextInt();
		if(count<1 || count>5) 
		{
			System.out.println(count+"번의 횟수는 잘못된 값!");
			s.close();
			return;	//main 함수(메소드)를 끝내버리는 것
		}
		
		//내가 시도할 로또 횟수
		for(int i = 0; i<count; i++) {
			int[] lotto = new int[6];
			
			
			//2. 당첨 번호를 뽑아내면 된다.
			for(int j = 0; j<lotto.length; j++) {
				int num = (int)(Math.random()*45)+1;
				
				//contain, indexOf는 객체대상!!!
				
				//중복여부 값이 있는지 없는지			   num이 lotto안에 있는지 없는지
//				boolean isDuplicate = Arrays.asList(lotto).contains(num);
				//contains : 객체배열, 객체List에서 쓰임				
//				int idx = Arrays.asList(lotto).indexOf(num);
				
				
				//중복체크 변수 만들고
				boolean isDuplicate = false;
				for(int k = 0; k<j; k++) 
				{
					if(lotto[k] == num) 
					{
						isDuplicate = true;
						j--;
						break;
					}
				}
				
				//isDuplicate가 false가 되면 앞의 느낌표에 의해서 true가 됨
				//만약 isDuplicate가 true가 되면
				//느낌표에 의해서 false가 됨
				// ! : not 연산
				if(!isDuplicate)
					lotto[j]=num;
			}
			
			int bns = (int)(Math.random()*45)+1;
			
			for(int j = 0; j<lotto.length; j++) {
				if(bns == lotto[j]) {
					bns = (int)(Math.random()*45)+1;
					j = -1;
				}
			}
			//Arrays:배열에 관련된 클래스 / sort:함수	//오름차순 정렬
			Arrays.sort(lotto);
			System.out.print((i+1)+"번째 번호");
			System.out.print(Arrays.toString(lotto));	//배열에 있는 값들을 [ㅇ, ㅇ, ㅇ]형태로 출력 . 문자열 형태로 출력
			System.out.println(" 보너스 번호: "+bns);
		}
	}
}







