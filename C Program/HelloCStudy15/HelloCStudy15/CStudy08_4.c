//CStudy10

//2-2. 내가 태어난 연도를 매개변수로 받고 간지를 '리턴'하세요
#include<stdio.h>
char* myGanJi(int year)
{
	int ganji = year % 10;
	int thee = year % 12;
	//서기 0년은 원숭이띠
	//경신임계 갑을병정 무기
	//신유술해 자축인묘 진사오미

	//3으로 한 이유
	//한글은 1글자 2byte이고, 끝에 널 값 들어갈 것을
	//고려함
	char ganjiResult[3]; // 간지 저장
	char theeResult[3]; // 띠 저장
	static char result[5]; //두 배열 (ganjiResult,theeResult)
	//이 값들을 여기에 합칠 것
	//static쓰기 싫으면 두 가지 방법이 있음
	//크기를 넉넉하게 잡거나(result[1024]
	//동적배열을 쓰면 된다.


	switch (ganji)
	{
	case 0:
		strcpy(ganjiResult,"경");
		break;
	case 1:
		strcpy(ganjiResult,"신");
		break;
	case 2:
		strcpy(ganjiResult,"임");
		break;
	case 3:
		strcpy(ganjiResult,"계");
		break;
	case 4:
		strcpy(ganjiResult,"갑");
		break;
	case 5:
		strcpy(ganjiResult,"을");
		break;
	case 6:
		strcpy(ganjiResult,"병");
		break;
	case 7:
		strcpy(ganjiResult,"정");
		break;
	case 8:
		strcpy(ganjiResult,"무");
		break;
	case 9:
		strcpy(ganjiResult,"기");
		break;
	default:
		strcpy(ganjiResult,"error!");
		break;
	}
	//신유술해 자축인묘 진사오미
	switch (thee)
	{
	case 0:
		strcpy(theeResult,"신");
		break;
	case 1:
		strcpy(theeResult,"유");
		break;
	case 2:
		strcpy(theeResult,"술");
		break;
	case 3:
		strcpy(theeResult,"해");
		break;
	case 4:
		strcpy(theeResult,"자");
		break;
	case 5:
		strcpy(theeResult,"축");
		break;
	case 6:
		strcpy(theeResult,"인");
		break;
	case 7:
		strcpy(theeResult,"묘");
		break;
	case 8:
		strcpy(theeResult,"진");
		break;
	case 9:
		strcpy(theeResult,"사");
		break;
	case 10:
		strcpy(theeResult,"오");
		break;
	case 11:
		strcpy(theeResult,"미");
		break;
	default:
		strcpy(theeResult,"error!");
		break;
	}
	//strcat, concat 등을 써도 되지만..
	//for문으로
	for (int i = 0; i < 2; i++)
		result[i] = ganjiResult[i];
	for (int i = 0; i < 2; i++)
		result[i + 2] = theeResult[i];
	result[4] = NULL;
	return result;
}
int main()
{
	printf("언제 태어났나요? ");
	int year;
	scanf_s("%d", &year);
	printf("%s",myGanJi(year));
	//printf("%s", printGanji(year));
	return 0;
}