#include<stdio.h>
int a = 10;
int static b = 20;

int up_Print()
{
	a++;
	b++;
	printf("%d %d\n", a, b);
}