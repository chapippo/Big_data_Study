#include<stdio.h>
int main()
{

	//1���� 100������ ��
	int sum = 0;
	for (int i = 1; i <= 100; i++)
		sum += i;
	printf("1���� 100������ ���� %d \n", sum);

	//1���� 100������ ���� ���ϴµ� 3�� �����

	sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("1���� 100������ �� �� 3�� ����� ���� %d \n", sum);

	//1���� n������ ��

	printf("����� ���ұ�� \n");
	int n;
	scanf_s("%d", &n);
	sum = 1;
	for (int i = 1; i <= n; i++)
		sum *= i;
	printf("1���� %d������ �� : %d \n", n, sum);


	//�Է��� ���� ���� ������ ���� �ﰢ���� ����غ�����. �Է� 3 
	// *
	// **
	// ***
	
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	i = 10;

	//�ݴ��
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j<3-i-1; j++)
			printf(" ");
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}

	//1��
	for (char c = 'A'; c <= 'Z'; c++)
	{
		printf("%c", c);
	}


	//2��
	for (char c = 'a'; c <= 'z'; c++)
	{
		printf("%c", c);
	}

	for (char c = 'A'; c <= 'z'; c++)
	{
		//if(~~~)
		printf("%c", c);
	}


	return 0;
}