#include<stdio.h>
int main()
{
	printf("2x+b�� �ش�?\n");
	printf("x��?");
	int x, b;
	scanf_s("%d", &x);
	printf("b��?");
	scanf_s("%d", &b);
	printf("2x+b=%d", (2 * x) + b);


	return 0;
}