#include<stdio.h>
int main()
{
	if (0)
	{
		int month;
		printf("태어난 달은? ");
		scanf_s("%d", &month);

		if (month == 12 || month == 1 || month == 2)
			printf("겨울\n");
		else if (month >= 3 && month <= 5)
			printf("봄\n");
		else if (month >= 6 && month <= 8)
			printf("여름\n");
		else if (month >= 9 && month <= 11)
			printf("가을\n");
		else
			printf("삐빅\n");
	}

	int month;
	//printf("%d", month);
	//month = 10;                                   값을 설정 안 해주면 쓰레기 값이 생긴다
	printf("태어난 달은? ");
	scanf_s("%d", &month);
	switch (month)
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
		printf("삐빅\n");
		break;
	}





	return 0;
}