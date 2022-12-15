#include<stdio.h>
int main()
{

	//1부터 100까지의 합
	int sum = 0;
	for (int i = 1; i <= 100; i++)
		sum += i;
	printf("1부터 100까지의 합은 %d \n", sum);

	//1부터 100까지의 합을 구하는데 3의 배수만

	sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("1부터 100까지의 합 중 3의 배수의 합은 %d \n", sum);

	//1부터 n까지의 곱

	printf("몇까지 곱할까요 \n");
	int n;
	scanf_s("%d", &n);
	sum = 1;
	for (int i = 1; i <= n; i++)
		sum *= i;
	printf("1부터 %d까지의 곱 : %d \n", n, sum);


	//입력한 값에 따라서 다음과 같은 삼각형을 출력해보세요. 입력 3 
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

	//반대로
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j<3-i-1; j++)
			printf(" ");
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}

	//1번
	for (char c = 'A'; c <= 'Z'; c++)
	{
		printf("%c", c);
	}


	//2번
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