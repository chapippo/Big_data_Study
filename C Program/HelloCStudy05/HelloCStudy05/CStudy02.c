#include<stdio.h>
int main()
{
	if (0)
	{
		//1번
		//팩토리얼을 출력해보세요.
		//입력 : 5
		//출력 : 5!=5x4x3x2x1

		/*
		int n;
		scanf_s("%d", &n);
		int sum;
		sum =1;
		for (int i = 1; i <= 6; i++)
		{
			if (i > 6)
				break;
			printf("%d")
		}
		sum *= 1;
		printf("1부터 5까지의 곱 = %d");
		*/

		/*
		printf("입력 : ");
		int n; 0
		int sum = 0;
		scanf_s("%d", &n);
		sum = 1;
		for (int i = 1; i <= n; i++)
			sum *= i;
		printf("1부터 %d까지의 곱 : %d\n", n, sum);
		*/




		printf("몇 팩토리얼?");
		int fact;
		scanf_s("%d", &fact);									 //ex) fact가 5라면
		printf("%d!=%d", fact, fact);                             //    i는 4부터 1까지
		for (int i = fact - 1; i > 0; i--)                  //역for문
		{
			printf("x%d", i);
		}




		//2번
		//n부터 m까지의 합 (if문 줘서 m이 작으면 에러메시지 출력할 수도 있고
		//아니면 그 변수의 값을 바꿔줄 수도 있다.
		//변수의 값을 바꿔주는 걸 해보고..
		//3번에선 에러메시지 출력하는 걸 해보자.

		int n, m;                 //n이 더 클 경우 둘의 값을 서로 바꿈
		printf("n과 m 입력하세요. ");
		scanf_s("%d %d", &n, &m);
		if (n > m)               //'첫번째가 두번째보다 더 크다'로 잡고
		{
			int temp = m;         //temp 값은 임시값
			m = n;				  //여기서 값을 서로 바꿔줌                swap 문제@@@@@@@@@
			n = temp;
		}
		int sum = 0;
		for (int i = n; i <= m; i++)
			sum += i;
		printf("%d부터 %d까지의 합은 %d이다.\n", n, m, sum);




		//3번
		//n부터 m까지의 합 (단, 짝수만) -> n이 m보다 클 경우 오류 처리하기
		printf("n? m? 입력하세요. ");
		scanf_s("%d %d", &n, &m);
		if (n > m)
		{
			printf("첫번째가 두번째보다 커서 합 못 구함!\n");
		}
		else
		{
			sum = 0;                     //초기화 해줘야
			for (int i = n; i < m; i++)
			{
				/*if (i % 2 != 0)
					continue;*/
				if (i % 2 == 0)
					sum += i;                 //누적시키는데
			}
			printf("%d부터 %d까지의 합은 %d이다.\n", n, m, sum);
		}

		//4번
		//숫자를 입력받고, 그것의 제곱을 출력하는 코드를 짜되, 무한 반복한다. 
		//단 0 이하의 숫자를 입력받으면 이 코드를 종료


		while (1)
		{
			int input;
			printf("어떤 숫자를 제곱할 건가? ");
			scanf_s("%d", &input);
			if (input <= 0)
				break;
			printf("제곱값 : %d\n", input * input);

		}
		printf("4번 종료됨 \n");


		/*
		while (1)
		{
			int input;
			printf("어떤 숫자를 제곱할 건가? ");
			scanf_s("%d", input);

		}
		printf("제곱하고 싶은 수는? ");
		*/


		//do while은 지금처럼 input이 0이어서
		//while 조건을 만족하지 못 해도 무조건 한 번은 실행한다.
		//즉 무한루프를 돌거나 안 돌거나 처음에 값은 무조건
		//받아야 한다면 do while을 쓴다.
		int input = 0;
		do
		{
			printf("숫자를 입력하시오. ");				//
			scanf_s("%d", &input);						//
			printf("%d\n", input * input);
		} while (input > 0);

	}

		//5번   @@@@@@@@@@@@@@@
		int N;
		printf("입력");
		scanf_s("%d", &N);
		for (int i = 0; i < 2 * N; i++)// 행 부분
		{
			int onOffSwitch = i;                            //i가 1이면 0, 1 두 번 돈다
			for (int j = 0; j < N; j++)						
			{
				if (onOffSwitch % 2 == 0)                                        //백준에서는 2이상에서
					printf("*");
				else
					printf(" ");
				onOffSwitch++;									//두 번 돌고 띄고
			}
			printf("\n"); // 한 줄 출력하고 한 줄 띄는 것
		}

	

	return 0;
}