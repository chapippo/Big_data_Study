#include<stdio.h>
//실습 5번 태어난 연도를 매개변수로 받고 나이 리턴
int calcAge(int y)
{
	return 2023 - y;
}

int main()
{
	int year;
	printf("몇 년생?");
	scanf_s("%d", &year);
	printf("나이는 %d살입니다.\n", calcAge(year));
	return 0;
}