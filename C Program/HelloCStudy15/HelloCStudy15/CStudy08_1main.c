//CStudy06

//1. 내가 태어난 연도를 매개변수로 받고 무슨띠인지
//문자열을 리턴하세요.
#include<stdio.h>
int main()
{
	char thee[10];// = "원숭이";	//thee라는 변수 자체는 10칸짜리 배열의 시작 위치를 가리킨다
	int year;						//char thee[10]="원숭이"를 넣으면 10칸 안에 잘 들어간다
	printf("몇년생인가요? ");			//(14줄로) but 14줄 같이 후에 넣으려고 하면 시작 위치에 "원숭이"를 넣는 거라 
	scanf_s("%d", &year);			//들어가지를 않음

	switch (year%12)
	{
	case 0:
		//thee = "원숭이"; 이거 안 됨
		strcpy(thee, "원숭이");//thee에 원숭이라는 문자열을 집어넣음ㄱ		//위에 char thee[10]으로 썼기에 strcpy 사용 ok
		break;				  //'strcpy'를 통해서				  ㄴ
	case 1: 
		strcpy(thee, "닭띠");
		break;
	case 2: 
		strcpy(thee, "개띠");
		break;
	case 3: 
		strcpy(thee, "돼지띠"); 
		break;
	case 4: 
		strcpy(thee, "쥐띠"); 
		break;
	case 5:
		strcpy(thee, "소띠"); 
		break;
	case 6: 
		strcpy(thee, "호랑이띠");
		break;
	case 7: 
		strcpy(thee, "토끼띠");
		break;
	case 8: 
		strcpy(thee, "용띠");
		break;
	case 9: 
		strcpy(thee, "뱀띠");
		break;
	case 10:
		strcpy(thee, "말띠");
		break;
	case 11: 
		strcpy(thee, "양띠");
		break;
	default:
		printf("error!");
		return -1; //코드를 종료시켜버림
	}
	printf("%s", thee);
	return 0;
}