package Javastudy02;

import java.util.*;

public class HelloJava02_Lotto2 {

	public static void main(String[] args) {
		ArrayList<Integer>lotto = new ArrayList<Integer>();
		Scanner s = new Scanner(System.in);
		System.out.println("얼마너치?");
		int price = s.nextInt();
		if(price%1000 != 0) {
			System.out.println("거스름돈 : "+price%1000);
			price -= (price%1000);
			System.out.println("사용금액 : "+price);
		}
		int count = price/1000;
//		if(count<1 || count>5)
		if(price<1000 || price>6000)
		{
			System.out.println("잘못된 금액");
			return;
		}
		
		for(int i = 0; i<count; i++) {
			while(lotto.size() != 6) {	//번호가 6개가 될 때까지 돔
				int num = (int)(Math.random()*45)+1;
				lotto.remove((Integer)num);	//중복'값' 제거	//remove 1. 특정 idx번째의 값을 지우는 경우
				lotto.add(num);									   //2. ex) (Integer)30이라면 '30'이라는 값을 지움
			}
			
			Collections.sort(lotto);
			System.out.print(lotto.toString());
			int bns = (int)(Math.random()*45)+1;
			while(lotto.contains(bns)) {
				bns = (int)(Math.random()*45)+1;
			}
			System.out.println(" 보너스번호 : "+bns);
			lotto.clear();	//lotto 리셋하기, 해줘야 26줄 while문 다시 돔
			
			
		}
		
	}

}
