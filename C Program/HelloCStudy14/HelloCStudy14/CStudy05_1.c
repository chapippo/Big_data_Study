#include<stdio.h>
//2��	//���
void mul_1(int a)
{
	for (int i = 1; i <= 9; i++)
		printf("%d x %d = %d\n", a, i, a * i);
	/*
	for (int i = 0; i < 1; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%d x %d = %d\n", a, j, a * j);		
	}
	*/
}
//3��	//���	//�ٲٱ� ���
void mul_2(int a, int b)
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = a; j <= b; j++)
			printf("%d x %d = %d\n", i, j, i * j);		
	}
}


void Swap(int* a, int * b)
//4��	//��ȯ
int mul_3(a, b)
{
	//a�� �� ũ�ٸ�
	//1. �� �ȿ��� �׳� ���ǹ� �Ἥ �ٲ��ش�.
	//2. Swap �Լ� ���� �ٲ۴�.
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
			sum += (i * j);			
		}
	}
	printf("�� = %d", sum);
	return sum;
}

int main()
{
	printf("2��) ���ϴ� ����? ");
	int a;
	scanf_s("%d", &a);
	mul_1(a);

	printf("\n");

	printf("3��) ����� ����� ����ұ��? ");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	mul_2(num1, num2);

	printf("\n");

	printf("4��) ��ܿ��� ��ܱ��� ��� �� ��? ");
	int no1, no2;
	scanf_s("%d %d", &no1, &no2);
	mul_3(no1, no2);

	return 0;
}