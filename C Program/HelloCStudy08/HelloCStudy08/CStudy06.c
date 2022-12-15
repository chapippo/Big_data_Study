#include<stdio.h>
int main()
{
	//1번
	
	//2단 부터 9단 값을 2차원에 저장
	//2~9 -> 8행
	//1~9 -> 9열

	int gugu1[8][9];   
	//gugu1[0][0] ~ gugu1[7][8]

	int row = sizeof(gugu1)/*72칸*4*/ / sizeof(gugu1[0]/*9*4*/);									//row = 행  -> col 열
	int col = sizeof(gugu1[0]) / sizeof(gugu1[0][0]); //sizeof(int);
	printf("%d행 %d열\n", row, col);//8행 9열
	//gugu1은 8칸짜리 배열 가리킴
	//gugu1[0]~gugu1[7]까지는 9칸짜리 배열 가리킴

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			gugu1[i][j] = (i + 2) * (j + 1);
		}
	}
	/*
	* 
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

	*/

	//2번

	int gugu2[10][9];
	//10~19단이니까 10개
	// 10 11 12 13 14 15 16 17 18 19
	int gugu2_row = sizeof(gugu2) / sizeof(gugu2[0]);
	//row랑 col 값 똑같으니까 그대로 써도 됨
	for (int i = 0; i < gugu2_row; i++)
	{
		for (int j = 0; j < col; j++)
			gugu2[i][j] = (i + 10) * (j + 1);
	}



	/*
	int
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
	*/


	//3번
	int sum1 = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			sum1 += gugu1[i][j];   // sum = gugu1[i][j] + sum;
	}

	//4번
	int sum2 = 0;
	for (int i = 0; i < gugu2_row; i++)
	{
		for (int j = 0; j < col; j++)
			sum2 += gugu2[i][j];
	}

	//5번 
	int sum3 = sum1 + sum2;

	printf("2~9 합 : %d\n", sum1);
	printf("10~19 합 : %d\n", sum2);
	printf("총합 : %d\n", sum3);


	//6번
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			printf("%3d ", gugu1[i][j]); //%3d -> 3칸   //3 붙이면 3칸 쓴다 
		printf("\n");
	}
	
	
	




	//7번
	for (int i = 0; i < gugu2_row; i++)
	{
		for (int j = 0; j < col; j++)
			printf("%d ", gugu2[i][j]);
		printf("\n");
	}



	//if문 줘서 띄어쓰기
	//10 미만은 2번 띄어쓰고, 100미만은 1번 띄어쓰기

	//6-1번
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (gugu1[i][j] < 10) //1의 자리, 1자리 숫자
				printf("  ");
			else if (gugu1[i][j] < 100)
				printf(" ");
			printf("%d ", gugu1[i][j]);
		}
		printf("\n");
	}


	//7-2번
	for (int i = 0; i < gugu2_row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (gugu2[i][j] < 10)//1의자리, 1자리 숫자
				printf("  ");
			else if (gugu2[i][j] < 100)//10~99, 2자리 숫자
				printf(" ");
			printf("%d ", gugu2[i][j]);
		}
		printf("\n");
	}


	return 0;
}