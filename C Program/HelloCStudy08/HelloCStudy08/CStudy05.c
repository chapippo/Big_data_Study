#include<stdio.h>
int main()
{
	//다중포인터를 이용해서
	//배열에 있는 값 가리키는 거

	//4칸짜리 1차원 배열 3개 관리하는 2차원 배열이 있다고 해보자

	int numbers[3][4] = {             // 2차원 배열 이렇게 쓸 수 있다
		{10,20,30,40},
		{50,60,70,80},
		{90,100,110,120}
	};

	int* *ptr = numbers;                       
	printf("%d", numbers[0][0]);
	//printf("%d", ptr[0][0]);    //이렇게 하면 안 됨


	//______________________________@@@
	//4칸짜리 배열을 가리키는 포인터
	//즉 배열포인터를 만들어야 함
	// **로 쓰는 게 아닙니다
	int(*nptr)[4] = numbers;              
	//https://dojang.io/mod/page/view.php?id=312

	printf("\n%d\n", numbers[1][1]);  //60
	printf("\n%d\n", nptr[1][1]);     //60
	//*는 포인터 이고, []는 칸 수

	//배열은 포인터이고
	//포인터 앞에 별을 붙이면 그 안에 들어간 값을 출력가능
	printf("\n%d\n", **numbers);           //     //numbers는 제일 첫 번째 거 가리킨다
	printf("\n%d\n", **(numbers + 1));	   //
	printf("\n%d\n", *(* numbers + 1));	   //


	
	//장태연님이 발견한 거....
	printf("장태연 : %d\n", *(*nptr + 10));

	//   * 질문하기 @@@@@@@@@@@


















	//1번
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
	//2번

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

	//3번
	
	
	*/





	return 0;
}