package Javastudy02;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class HelloJava01_Lotto1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// ArrayList 이용한 로또
		// 대신 배열 스타일로 코드 짜보기
		Scanner s = new Scanner(System.in);
		System.out.println("얼마너치 사실 건가요?");
		int count = s.nextInt()/1000; //5000 입력하면 count = 5
		
		//만약 4100원 이런 금액이라면 어떻게 할까요
		//거스름돈도 줘보자 @@@
		
		if(count<1 || count>5)
		{
			System.out.println("금액이 잘못되었습니다.");
			return;
		}
		for(int i = 0; i<count; i++) {
			ArrayList<Integer> lotto = new ArrayList<Integer>();	//지금 상태로는 0라서 
			for(int j = 0; j<6; j++) 
			{					//j<6 (6번도는 반복문 세모, j값이 6미만이면 계속 도는 o)
				int num = (int)(Math.random()*45)+1;
				
				boolean isDuplicate = false;
				for(int k = 0; k<j; k++) {
					if(lotto.get(k)==num) {
						isDuplicate = true;
						j--;
						break;
					}
				}
				
				if(!isDuplicate)
					lotto.add(num);
			}
			
			//System.out.print(lotto.toString());
			
			int bns = (int)(Math.random()*45)+1;
			for(int j = 0; j<lotto.size(); j++) {
				if(bns==lotto.get(j))
				{
					bns = (int)(Math.random()*45)+1;
					j=-1;
				}
			}
			Collections.sort(lotto);
			System.out.print(lotto.toString());
			System.out.println(" 보너스 번호 : "+bns);
			//참고 : lotto.clear() 안해도 됨
			//왜냐면 위쪽에 ArrayList를 새로 선언하기 때문
//			lotto.clear();	//lotto 안에 있는 값을 전부 삭제(=remove)
		}
	}

}







