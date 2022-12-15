#include<stdio.h>
//1번	//반환

//int가 있으면 반드시 return을 써줘야 하고
//void라면 return; 적거나 생략가능
//int, double, char 등이라면
//반드시 return을 적어야 함
//int 앞에 적었으면 반드시 return 정수; 적어야 함 @@@@@
int mulsum()
{
	int sum = 0;
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			sum += (i * j);
		}
	}
	return sum;
}

int main()
{
	printf("구구단 값의 합 = %d\n", mulsum());

	return 0;
}