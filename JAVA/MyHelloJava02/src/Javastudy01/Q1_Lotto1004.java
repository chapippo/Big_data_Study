package Javastudy01;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Q1_Lotto1004 {
	public static void main(String[] args) {
			//1. 당첨 번호를 몇 번 뽑아낼지 입력받기
			Scanner s = new Scanner(System.in);			
			
			System.out.println("몇번 뽑을건지?");
			int count = s.nextInt();
			if(count<1 || count>5) 
			{
				System.out.println(count+"번의 횟수는 잘못된 값!");
				s.close();
				return;	//main 함수(메소드)를 끝내버리는 것
			}
			
			//내가 시도할 로또 횟수
			for(int i = 0; i<count; i++) {
				ArrayList<Integer> numbers = new ArrayList<Integer>();
								
				//2. 당첨 번호를 뽑아내면 된다.
				for(int j = 0; j<6; j++) {
					int num = (int)(Math.random()*45)+1;
					
					
					
					boolean isDuplicate = false;
					for(int k = 0; k<j; k++) 
					{	//k번째 idx 값 
						if(numbers.get(k) == num) 
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
						numbers.add(num);
				}
				
				
				
				int bns = (int)(Math.random()*45)+1;
				
				for(int j = 0; j<numbers.size(); j++) {
					if(bns == numbers.get(j)) {
						bns = (int)(Math.random()*45)+1;
						j = -1;
					}
				}
				//Arrays:배열에 관련된 클래스 / sort:함수	//오름차순 정렬
//				Arrays.sort(lotto);
				System.out.print((i+1)+"번째 번호");
				System.out.print(numbers);	//배열에 있는 값들을 [ㅇ, ㅇ, ㅇ]형태로 출력 . 문자열 형태로 출력
				System.out.println(" 보너스 번호: "+bns);
			}
		}
	}









