#include<stdio.h>
void swap(int* pa, int* pb)		
{								
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{
	int a, b;
	printf("a b �Է��Ͻÿ�. ");
	scanf_s("%d %d", &a, &b);
	swap(&a, &b);
	printf("a=%d, b=%d", a, b);
	return 0;
}