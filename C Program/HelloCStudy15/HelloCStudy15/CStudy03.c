#include<stdio.h>
//실습 3번 : '매개변수'를 통해서 계절 출력하는 함수
void printseason(int month)
{
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
		printf("error!\n");
		break;
	}
}

int main()
{
	int month;
	printf("3번) 태어난 월을 입력하세요. ");
	scanf_s("%d", &month);
	printseason(month);

	return 0;
}