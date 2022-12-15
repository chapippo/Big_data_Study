#include<stdio.h>
//실습 4번 리턴o 매개변수x
int calcAge()
{
	int year;
	printf("몇 년도에 태어났나요 ");
	scanf_s("%d", &year);
	return 2023 - year;
}

int main()
{
	int age = calcAge();
	printf("내 나이는 %d살입니다.\n", age);
	return 0;
}