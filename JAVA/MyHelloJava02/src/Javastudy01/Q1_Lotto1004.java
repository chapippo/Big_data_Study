package Javastudy01;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Q1_Lotto1004 {
	public static void main(String[] args) {
			//1. ��÷ ��ȣ�� �� �� �̾Ƴ��� �Է¹ޱ�
			Scanner s = new Scanner(System.in);			
			
			System.out.println("��� ��������?");
			int count = s.nextInt();
			if(count<1 || count>5) 
			{
				System.out.println(count+"���� Ƚ���� �߸��� ��!");
				s.close();
				return;	//main �Լ�(�޼ҵ�)�� ���������� ��
			}
			
			//���� �õ��� �ζ� Ƚ��
			for(int i = 0; i<count; i++) {
				ArrayList<Integer> numbers = new ArrayList<Integer>();
								
				//2. ��÷ ��ȣ�� �̾Ƴ��� �ȴ�.
				for(int j = 0; j<6; j++) {
					int num = (int)(Math.random()*45)+1;
					
					
					
					boolean isDuplicate = false;
					for(int k = 0; k<j; k++) 
					{	//k��° idx �� 
						if(numbers.get(k) == num) 
						{
							isDuplicate = true;
							j--;
							break;
						}
					}
					
					//isDuplicate�� false�� �Ǹ� ���� ����ǥ�� ���ؼ� true�� ��
					//���� isDuplicate�� true�� �Ǹ�
					//����ǥ�� ���ؼ� false�� ��
					// ! : not ����
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
				//Arrays:�迭�� ���õ� Ŭ���� / sort:�Լ�	//�������� ����
//				Arrays.sort(lotto);
				System.out.print((i+1)+"��° ��ȣ");
				System.out.print(numbers);	//�迭�� �ִ� ������ [��, ��, ��]���·� ��� . ���ڿ� ���·� ���
				System.out.println(" ���ʽ� ��ȣ: "+bns);
			}
		}
	}









