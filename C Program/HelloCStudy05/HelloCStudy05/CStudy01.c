//�ݺ����� ���ؼ� ��� �غ���
//break, continue Ű���� (while, do-while���� �� ����) @@@@@@@ break�� switch��������
//while, do-while�� ���ؼ� �� �غ���.



#include<stdio.h>
int main()
{
	//break : switch������ ����
	//��� �ݺ������� ����
	//�� Ű���� ������ ��� �����

	for (int i = 0; i < 1000; i++)
	{
		if (i > 5)
			continue;                              //�� �ݺ����� ������ ���������ڴ� (return 0;��)
		printf("�̵���¯\n");
	}



	//continue : �����Ű�� �ʰ� ���� �ܰ�� skip��
	//1���� 10������ ���ڸ� ����ϵ�, ¦���� ����� ���

	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)				//Ȧ���� ������
			continue;              //i�� 1,3,5,7,9�� �� continue ������  
							       //i++�� �ٷ� �Ѿ  
		printf("���� : %d\n", i);  //���⸦ �������� ���� 
	}



	//while : ~ �ϴ� ����												@@@@@@@@@@
	//��ȣ �ȿ� �ִ� ���� true(��)�̸� ��� ����

	int count = 0;
	while (count < 10)         //count�� 10 �̻��̸� ��
	{
		count++;
		printf("count=%d\n", count);
	}


	while (1)  //���� �ݺ�
	{
		if(count > 100)
			break;
		count += 10;
		printf("count = % d\n", count);
	}


	do
	{
		//while ���� ������ �����̶� �� 1���� ������
		//while���� ��ȣ (while () )���� ������ �����̸� 
		//1��'��' �������� �ʴ´�.
		printf("1���� ������!!");
	} while (count < 100);


	return 0;
}