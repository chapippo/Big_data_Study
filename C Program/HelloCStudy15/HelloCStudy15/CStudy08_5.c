//CStudy11

//3. 매개변수로 태어난 월을 받고, 그에 따른 계절을
//문자열로 리턴하세요.
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
	printf("3번) 몇월에 태어났나요? ");
	scanf_s("%d", &mon);
	printf("%s", season(mon));
	return 0;
}