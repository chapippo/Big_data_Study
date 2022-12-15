#include<stdio.h>
//2번	//출력
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
//3번	//출력	//바꾸기 어떻게
void mul_2(int a, int b)
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = a; j <= b; j++)
			printf("%d x %d = %d\n", i, j, i * j);		
	}
}


void Swap(int* a, int * b)
//4번	//반환
int mul_3(a, b)
{
	//a가 더 크다면
	//1. 이 안에서 그냥 조건문 써서 바꿔준다.
	//2. Swap 함수 만들어서 바꾼다.
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
			sum += (i * j);			
		}
	}
	printf("합 = %d", sum);
	return sum;
}

int main()
{
	printf("2번) 원하는 단은? ");
	int a;
	scanf_s("%d", &a);
	mul_1(a);

	printf("\n");

	printf("3번) 몇부터 몇까지 출력할까요? ");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	mul_2(num1, num2);

	printf("\n");

	printf("4번) 몇단에서 몇단까지 출력 후 합? ");
	int no1, no2;
	scanf_s("%d %d", &no1, &no2);
	mul_3(no1, no2);

	return 0;
}