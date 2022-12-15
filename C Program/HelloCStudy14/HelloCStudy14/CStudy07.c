#include<stdio.h>
//1번
int main()
{
	int ss;
	printf("1번) 몇 월? ");
	scanf_s("%d", &ss);
	switch (ss)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;
	default:
		printf("XXXXX\n");
		break;
	}
		
	return 0;
}