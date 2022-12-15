//CStudy07

//1. 내가 태어난 연도를 매개변수로 받고 무슨띠인지
//문자열을 리턴하세요.
#include<stdio.h>
char* outputThee(int year)
{
	switch (year % 12)
	{
	case 0: return "원숭이띠";
	case 1: return "닭띠";
	case 2: return "개띠";
	case 3: return "돼지띠";
	case 4: return "쥐띠";
	case 5: return "소띠";
	case 6: return "호랑이띠";
	case 7: return "토끼띠";
	case 8: return "용띠";
	case 9: return "뱀띠";
	case 10: return "말띠";
	case 11: return "양띠";
	default: return "오류";
	}
}
char* moreEasyThee(int year)
{
	year %= 12;
	//2차원배열쓴다.
	static char thees[12][10] = { "원숭이","닭","개","돼지","쥐","소","호랑이","토끼","용","뱀","말","양" };
	return thees[year];				//하나하나가 문자(배)열
}	//왜 static을 썼나 ,, static에 저장해놔야 함수가 끝나도 이 공간이 남아있다
	
	//만약 static 없이 작성하면 


int main()
{
	int year;					
	printf("몇년생인가요? ");	
	scanf_s("%d", &year);		
	printf("%s\n", outputThee(year));
	printf("%s\n", moreEasyThee(year));
	return 0;
}