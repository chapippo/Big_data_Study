#include<stdio.h>
char* season(int month)
{
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		return "겨울";
	case 3:
	case 4:
	case 5:
		return "봄";
	case 6:
	case 7:
	case 8:
		return "여름";
	case 9:
	case 10:
	case 11:
		return "가을";
	default:
		return "지구아님";
	}	
}
int main()
{
	int mon;
	printf("3번) 언제 태어났나요? ");
	scanf_s("%d", &mon);
	printf("%s", season(mon));
}