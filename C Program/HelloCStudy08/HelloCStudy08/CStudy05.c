#include<stdio.h>
int main()
{
	//���������͸� �̿��ؼ�
	//�迭�� �ִ� �� ����Ű�� ��

	//4ĭ¥�� 1���� �迭 3�� �����ϴ� 2���� �迭�� �ִٰ� �غ���

	int numbers[3][4] = {             // 2���� �迭 �̷��� �� �� �ִ�
		{10,20,30,40},
		{50,60,70,80},
		{90,100,110,120}
	};

	int* *ptr = numbers;                       
	printf("%d", numbers[0][0]);
	//printf("%d", ptr[0][0]);    //�̷��� �ϸ� �� ��


	//______________________________@@@
	//4ĭ¥�� �迭�� ����Ű�� ������
	//�� �迭�����͸� ������ ��
	// **�� ���� �� �ƴմϴ�
	int(*nptr)[4] = numbers;              
	//https://dojang.io/mod/page/view.php?id=312

	printf("\n%d\n", numbers[1][1]);  //60
	printf("\n%d\n", nptr[1][1]);     //60
	//*�� ������ �̰�, []�� ĭ ��

	//�迭�� �������̰�
	//������ �տ� ���� ���̸� �� �ȿ� �� ���� ��°���
	printf("\n%d\n", **numbers);           //     //numbers�� ���� ù ��° �� ����Ų��
	printf("\n%d\n", **(numbers + 1));	   //
	printf("\n%d\n", *(* numbers + 1));	   //


	
	//���¿����� �߰��� ��....
	printf("���¿� : %d\n", *(*nptr + 10));

	//   * �����ϱ� @@@@@@@@@@@


















	//1��
	/*
	int multi_mul[9][10];

	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			multi_mul[i - 2][j - 1] = i * j;
	}
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%d\n", multi_mul[i - 2][j - 1]);
	}
	//2��

	int multil[100][100];

	for (int i = 10; i <= 19; i++)
	{
		for (int j = 1; j <= 9; j++)
			multil[i][j] = i * j;
	}
	for (int i = 10; i <= 19; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%d\n", multil[i][j]);
	}

	//3��
	
	
	*/





	return 0;
}