#include<stdio.h>
int main()
{
	printf("2x+b의 해는?\n");
	printf("x는?");
	int x, b;
	scanf_s("%d", &x);
	printf("b는?");
	scanf_s("%d", &b);
	printf("2x+b=%d", (2 * x) + b);


	return 0;
}