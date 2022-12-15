#include<stdio.h>
int main()
{
	//반복문

	//3가지가 있음
	//물론 goto문을 이용해서 반북


	//반복문이란?
	//만약 똑같은 문장을 10번 출력하거나
	//1부터 10까지의 합을 구해야 할 경우 등에 쓰임

	//1. for문
	
	for (int i = 0; i < 10; i++)                 //i 가 0부터 시작해서 (처음 선언) -> 10 미만이 될 때까지 실행 -> 10이되면 종료 
		printf("이동준 선생님 안녕하세요\n");
	int sum = 0;
	for (int i = 0; i <= 10; i++)																   
		sum += i;                                 //sum에다가 i 값을 계속 더함, 1부터 10까지
	printf("1부터 10까지의 합 : %d\n", sum);

	//for문도 중괄호로 묶을 수 있다. 동일한 패턴이 있거나
	for (int i = 0; i < 5; i++)
	{																						       // 새로 선언해야 함
		if (i % 2 == 0)
			printf("*");
		else
			printf("!");

	}


	//1번 


	//2번 
		/*for (int i, j = 1; i < 100; i++)
		{
			j = i * j;
		}
		printf("1부터 100까지의 합인데 3의 배수만 : %d\n");*/



	//3번
		int a = 0;
		for (int i = 1; i < 100; i)
			a *= i;
		printf("1부터 0000000");

		
	//4번
		/*int a = 3;
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < i + 1; j++)
				printf("*");
			printf("\n");
		}*/


	return 0;
}