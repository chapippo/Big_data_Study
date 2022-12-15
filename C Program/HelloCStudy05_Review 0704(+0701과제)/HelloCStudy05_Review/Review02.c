#include<stdio.h>
int main()
{
	//6번
	//입력한 숫자가 짝수라면 "짝!" 입력한 숫자가 홀수라면 "홀!" 단, 음수일 경우 무조건 "음수!!!"라고만 출력하기

	int num;
	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &num);
	if (num < 0)
	{
		printf("음수!!!\n");
	}
	else if (num == 0)
	{
		printf("num은 0!!!\n");            //확실하게 하기 위해서 추가
	}
	else
	{
		if (num % 2 == 0)
			printf("짝!\n");
		else
			printf("홀!\n");
	}
	
	///////////

	if (num < 0)
		printf("음수!\n");
	else if (num == 0)
		printf("0\n");
	else if (num > 0 && num % 2 == 0)
		printf("짝!\n");
	else if (num > 0 && num % 2 != 0)
		printf("홀!\n");                                //else if의 용도 @@@@@@@




	//7번
	//구구단 5단 출력
	/*int n;
	scanf_s("% d", &n);
	for (int n = 1; n <= 9, n++)
		printf("%d*5=%d", n, n * 5);*/

	printf("구구단 5단 출력하기\n");
	for (int i = 1; i < 10; i++)                      //왼쪽의 변수는 임시변수(for문 안쪽에서만 쓰는 변수(int)) @@@@@@@@@
		printf("5 x %d = %d\n", i, 5 * i);            //10 미만이라는 게 참이면 거짓일 때까지 실행
													  //가운데에 있는 조건이 핵심, 거짓이면 실행 안 됨



	//8번
	//구구단 n단 출력
	printf("몇 단?\n");
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < 10; i++)
		printf("%d x %d = %d\n", n, i, n * i);


	//9번
	//구구단 2단부터 9단까지 출력
	for (int n = 2; n < 10; n++)                    //이 줄 n값을 바깥으로 감싸는 형태
	{
		for (int i = 1; i < 10; i++)
			printf("%d x %d = %d\n", n, i, n * i);
	}


	//10번
	//
	int sum = 0;
	printf("몇까지 더할까요?\n");
	scanf_s("%d", &n);
	printf("1");                                    //1+2+... 에서 처음 1
	sum = 1;
	for (int i = 2; i <= n; i++)                                               
	{
		sum += i;          // 값 누적        
		printf("+%d", i);  // 메시지 출력            2+3+...이 여기
	}
	printf("=%d\n", sum);

	
	return 0;
}