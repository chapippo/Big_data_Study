#pragma once
#include<stdio.h>
//1번
int testsum(int a, int b, int c)
{
	int sum = 0;
	for (int i = a; i <= b; i++)  
	{
		if (i % c == 0)
			continue;
		sum += i;             
	}
	
	return sum;
}


//2번

int clock(int sec)
{
	//scanf_s("%d", &sec);
	if (sec >= 3600)
	{
		printf("error!\n");
		return -1;
	}
	
	int min = sec / 60;
	sec = sec % 60;

	printf("%d분 %d초\n", min, sec);
	return min;
}




//5번
//int main()

	//printf("n1에서 n2까지의 합을 구합시다. n1, n2를 입력하시오. ");
	//scanf_s()

