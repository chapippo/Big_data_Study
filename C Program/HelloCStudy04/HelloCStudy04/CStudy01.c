#include<stdio.h>
#define 가위 0 // 매크로 상수
#define 바위 1




//열거형
//사전평가에서 나온 거
//숫자들에게 이름을 붙이는 것
enum 십이지신
{
	//원숭이,닭,개,돼지,쥐,소,호랑이,토끼,용,뱀,말,양
	쥐=4,소,호랑이,토끼,용,뱀,말,양,원숭이=0,닭,개,돼지
};


//                                                                   << 조건문 >>

int main()
{
	const int 보 = 2;             // 상수라서 한 번 값이 들어가면 안 바뀜 @@@@@@@

	/* 1번)
	태어난 월 입력하고 그에 따라서 계절 출력
	12 1 2 겨울
	3 4 5 봄
	6 7 8 여름
	9 10 11 겨울
	그 외 오류메세지*/

	/*int mon;
printf("태어난 월을 입력하세요. ");
	scanf_s("%d", &mon);

	if (mon == 12 || mon == 1 || mon ==2)
		printf("겨울");
	else if (mon >=3 && mon =< 5)
		printf("봄");
	else if (mon <=8 && mon =>6 )
		printf("여름");
	else if (mon =<11 && mon => 9)
		printf("가을");
	else
		printf("삐빅");

		*/
	int month;
	printf("태어난 월을 입력하세요? ");
	scanf_s("%d", &month);

	//if문
	if (month == 12 || month == 1 || month == 2)
		printf("겨울\n");
	else if (month >= 3 && month <= 5)
		printf("봄\n");
	else if (month >= 6 && month <= 8)
		printf("여름\n");
	else if (month >= 9 && month <= 11)
		printf("가을\n");
	else
		printf("삐비빅\n");


	//switch tap tap
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
		printf("삐비비빅\n");
		break;
	}



	//주석 선생님 파일에서 복사하기                           @@@@@@@@@@@복사했음
	//ctrl + a : 전체 선택
	//ctrl + k,f : 정렬
	// ctrl + k,c : 주석
	// ctrl + k,u : 주석 해제
	





	/* 2번)
	숫자 가위바위보를 한다.(%3 이용)
	player1과 player2가 있고, player1을 기준으로 승패를 가른다.
	경우의 수는 9개이니 switch문을 이용하자.*/

	/*             int rcp = 0;

	switch (rcp)
	{
	case 0:
		printf("\n가위");
		switch(rcp2)
		{ case 0:  }
	}
	*/

	printf("가위 바위 보? (플레이어1)");
	int p1, p2;
	scanf_s("%d", &p1);
	printf("가위 바위 보? (플레이어2)");
	scanf_s("%d", &p2);
	p1 %= 3;   //3으로 나눈 나머지값으로 가위 바위 보 , 0,1,2 세가지수 밖에 없다
	p2 %= 3;
	switch (p1)
	{
	case 0://가위
		printf("p1: 가위\n");
		switch (p2)
		{
		case 0:
			printf("p2: 가위\n");
			printf("비김\n");
			break;
		case 1:
			printf("p2: 바위\n");
			printf("짐\n");
			break;
		case 2:
			printf("p2: 보\n");
			printf("이김\n");
			break;
		default:
			break;
		}
		break;
	case 1://바위
		printf("p1: 바위\n");
		switch (p2)
		{
		case 0:
			printf("p2: 가위\n");
			printf("이김\n");
			break;
		case 1:
			printf("p2: 바위\n");
			printf("비김\n");
			break;
		case 2:
			printf("p2: 보\n");
			printf("짐\n");
			break;
		default:
			break;
		}
		break;
	case 2://보
		printf("p1: 보\n");
		switch (p2)
		{
		case 0:
			printf("p2: 가위\n");
			printf("짐\n");
			break;
		case 1:
			printf("p2: 바위\n");
			printf("이김\n");
			break;
		case 2:
			printf("p2: 보\n");
			printf("비김\n");
			break;
		default:
			break;
		}
		break;


	default:   //예외상황은 고려 안 함
		break;
	}


	/*
	int pla1, pla2;
	printf("가위 바위 보? (플레이어1)");
	scanf_s(% d, &pla1);
	printf("가위 바위 보? (플레이어2)");
	scanf_s(% d, &pla2);
	*/

	if (p1 == 가위)
	{
		printf("가위!\n");
		if (p2 == 가위)
		{
			printf("p2 가위!\n");
			printf("비김\n");
		}
		else if (p2 == 바위)
		{
			printf("p2 바위!\n");
			printf("짐\n");
		}
		else if (p2 == 보)
		{
			printf("p2 보!\n");
			printf("이김\n");
		}
	}
	else if (p1 == 바위)
	{
		printf("바위!\n");
		if (p2 == 가위)
		{
			printf("p2 가위!\n");
			printf("이김\n");
		}
		else if (p2 == 바위)
		{
			printf("p2 바위\n");
			printf("비김\n");
		}
		else if (p2 == 보)
		{
			printf("p2 보\n");
			printf("짐\n");
		}
	}
	else if (p1 == 보)
	{
		printf("보!\n");
		if (p2 == 가위)
		{
			printf("p2 가위!\n");
			printf("짐\n");
		}
		else if (p2 == 바위)
		{
			printf("p2 바위\n");
			printf("이김\n");
		}
		else if (p2 == 보)
		{
			printf("p2 보\n");
			printf("비김\n");
		}
	}



	/* 3번)
	자신이 태어난 연도를 입력하고 그에 따라서 띠를 출력한다.
	참고로 띠의 순서는
	쥐->소->호랑이->토끼->용->뱀->말->양->원숭이->닭->개->돼지 이다.
	*/
	// 경우의 수가 12개


	printf("태어난 년도를 입력하시오. ");
	int year;
	scanf_s("%d", &year);
	switch (year % 12)
	{
	case 0:
		printf("원숭이\n");
		break;
	case 1:
		printf("닭\n");
		break;
	case 2:
		printf("개\n");
		break;
	case 3:
		printf("돼지\n");
		break;
	case 4:
		printf("쥐\n");
		break;
	case 5:
		printf("소\n");
		break;
	case 6:
		printf("호랑이\n");
		break;
	case 7:
		printf("토끼\n");
		break;
	case 8:
		printf("용\n");
		break;
	case 9:
		printf("뱀\n");
		break;
	case 10:
		printf("말\n");
		break;
	case 11:
		printf("양\n");
		break;
	default:
		break;
	}






	int myThee = year % 12;

	enum 십이지신 temp = 원숭이;
	printf("%d\n", temp);
	


	if (myThee == 원숭이)
		printf("원숭이\n");
	else if (myThee == 닭)
		printf("닭\n");
	else if (myThee == 개)
		printf("개\n");
	else if (myThee == 돼지)
		printf("돼지\n");
	else if (myThee == 쥐)
		printf("쥐\n");
	else if (myThee == 소)
		printf("소\n");
	else if (myThee == 호랑이)
		printf("호랑이\n");
	else if (myThee == 토끼)
		printf("토끼\n");
	else if (myThee == 용)
		printf("용\n");
	else if (myThee == 뱀)
		printf("뱀\n");
	else if (myThee == 말)
		printf("말\n");
	else if (myThee == 양)
		printf("양\n");






	return 0;
}