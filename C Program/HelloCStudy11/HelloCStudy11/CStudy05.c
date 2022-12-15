#include<stdio.h>
int a;
int b;

//1번
int bbigNum()
{
	if (a >= b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
}

//2번
int bigNum()
{
	if (a > b)
		return a;
	else
		return b;
}

//3번
void SwapNum(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("%d %d", a, b);
}

int main()
{
	//2
	printf("숫자 두 개를 입력하시오.\n");
	scanf_s("%d %d", &a, &b);
	printf("%d\n",bigNum(a, b));
	
	SwapNum(a, b);
}