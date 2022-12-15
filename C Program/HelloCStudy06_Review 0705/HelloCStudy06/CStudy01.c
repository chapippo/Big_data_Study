#include<stdio.h>
int main()
{
	//1번
	printf("나이를 입력하세요. ");							
	int age;
	scanf_s("%d", &age);

	if (age < 0)
	{
		printf("음수\n");
	}
	else
	{
		age /= 10; //34 -> 3 //       age = age/10  
		switch (age)
		{
		case 0: //0~9
			printf("응애응애\n");
			break;
		case 1: //10~19
			printf("급식먹는 친구들\n");
			break;
		case 2: //20~29
			printf("청춘\n");
			break;
		case 3: //30~39
			printf("일잘러\n");
			break;
		case 4: //40~49
			printf("관리자\n");
		default: //50~ 무한대
			printf("멋쟁이\n");
			break;
		}
	}
		


	if(0)
	{
	switch (age / 10)
	{
	case 0:
		if (age > 0)
			printf("응애\n");
		else
			printf("멋쟁이");
		break;
	case 1:
		printf("급식\n");
		break;
	case 2:
		printf("청춘\n");
		break;
	case 3:
		printf("일잘러\n");
		break;
	case 4:
		printf("관리자\n");
		break;

	default:
		printf("멋쟁이\n");
		break;
	}
}



	//2번
	printf("학점을 입력하세요. ");
	double score;  //float로 해도 됨
	scanf_s("%lf", &score);
	if (score < 0)
		printf("퇴학\n");
	else
	{
		if (score < 1.0)
			printf("F\n");
		else if (score >= 1.0 && score < 2.0)
			printf("D\n");
		else if (score < 3.0)
			printf("C\n");
		else if (score < 4.0)
			printf("B\n");
		else if (score < 4.5)
			printf("A\n");
		else if (score == 4.5)
			printf("A+\n");
		else
			printf("교수\n");
	}





	return 0;
}