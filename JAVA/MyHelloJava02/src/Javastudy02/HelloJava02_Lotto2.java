package Javastudy02;

import java.util.*;

public class HelloJava02_Lotto2 {

	public static void main(String[] args) {
		ArrayList<Integer>lotto = new ArrayList<Integer>();
		Scanner s = new Scanner(System.in);
		System.out.println("�󸶳�ġ?");
		int price = s.nextInt();
		if(price%1000 != 0) {
			System.out.println("�Ž����� : "+price%1000);
			price -= (price%1000);
			System.out.println("���ݾ� : "+price);
		}
		int count = price/1000;
//		if(count<1 || count>5)
		if(price<1000 || price>6000)
		{
			System.out.println("�߸��� �ݾ�");
			return;
		}
		
		for(int i = 0; i<count; i++) {
			while(lotto.size() != 6) {	//��ȣ�� 6���� �� ������ ��
				int num = (int)(Math.random()*45)+1;
				lotto.remove((Integer)num);	//�ߺ�'��' ����	//remove 1. Ư�� idx��°�� ���� ����� ���
				lotto.add(num);									   //2. ex) (Integer)30�̶�� '30'�̶�� ���� ����
			}
			
			Collections.sort(lotto);
			System.out.print(lotto.toString());
			int bns = (int)(Math.random()*45)+1;
			while(lotto.contains(bns)) {
				bns = (int)(Math.random()*45)+1;
			}
			System.out.println(" ���ʽ���ȣ : "+bns);
			lotto.clear();	//lotto �����ϱ�, ����� 26�� while�� �ٽ� ��
			
			
		}
		
	}

}
