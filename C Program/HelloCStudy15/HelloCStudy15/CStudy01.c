#include<stdio.h>
//실습 1번
int main()
{
	int month;
	printf("1번) 태어난 월을 입력하세요. ");
	scanf_s("%d", &month);
	switch (month)
	{
		case 12:
			month = 6;	//case 2: 까지 가고 끝
		case 1:			//여기서는 month 값이 바뀌던 말던 상관이 없으므로
		case 2:			//그냥 쭉 내려감
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
	return 0;
}