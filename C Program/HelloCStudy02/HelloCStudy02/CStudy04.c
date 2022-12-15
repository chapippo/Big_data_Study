#include<stdio.h>
int main()
{
	//1. 숫자를 입력받고 아래와 같이 출력한다.
	//123 = > 2분 3초

	printf("몇 초인가요?(1번)");
	int sec;
	scanf_s("%d", &sec);
	//123 -> 2분3초
	//분을 구할 땐 나누기(/), 초를 구할 땐 나머지(%)
	printf("%d분 %d초\n", sec / 60, sec % 60);


	//2. 2x + b 라는 수식이 있을 때,
	//x와 b를 입력하여 해를 구하여라
	

	printf("2x+b의 해는?(2번)\n");
	printf("x는?");
	int x, b;//정수 변수 x와 b선언
	scanf_s("%d", &x);
	printf("b는?");
	scanf_s("%d", &b);
	printf("2x+b=%d\n", (2 * x) + b);
	


	//3. 자신의 기분 정보(+-0 중 하나), mbti, 혈액형(RH + 와 - 도 입력),
	//키, 나이 이런 정보들을 입력받고,,,,,,,,,, 출력해봐라.

	//저의 기분은% c입니다.제 mbti는% s이고, 혈액형은% s입니다.
	//제 키는 % .f이며, 나이는% d살입니다.
	
	//ex) 저의 기분은 + 입니다.제 mbti는 istp이고, 혈액형은 ab rh + 입니다.
	//제 키는 173.12이며, 나이는 34살입니다.

	printf("기분은?");
	rewind(stdin);          //char 입력받기 전이므로 rewind, 위에서 이런저런 입력을 받았기 때문(숫자 입력 받을때는 신경 안 써도 됨)
	//char feel = getchar();//getchar
	char feel;
	scanf_s("%c", &feel, 1);
	printf("mbti?");
	rewind(stdin);
	char mbti[5];
	scanf_s("%s", mbti, sizeof(mbti));
	printf("혈액형?");
	rewind(stdin);
	char bType[10];
	gets(bType);

	//double 타입 변수에 값을 넣을 때 lf로 하기
	double cm;
	printf("키는?");
	scanf_s("%lf", &cm);

	printf("나이는?");
	int age;
	scanf_s("%d", &age);

	printf("저의 기분은 %c입니다. 제 mbti는 %s입니다. 혈액형은 %s입니다.제키는 %.2lf이며, 나이는 %d살입니다.\n", feel, mbti, bType, cm, age);




	
	//4. 변수 a를 새로 선언해서 다음 식의 해를 구하라
	//(x + a)(x + b) = > x ^ 2 + (a + b)x + (a * b)
	printf("x ^ 2 + (a + b)x + (a * b)의 해는?(4번)");





	//5. 두 개의 숫자를 입력받는다.(둘 다 3자리)
	//1) 첫번째 숫자 곱하기 두번째 숫자의 1의 자리 수(472 * 5)
	//2) 첫번째 숫자 곱하기 두번째 숫자의 10의 자리 수(472 * 8)
	//3) 첫번째 숫자 곱하기 두번째 숫자의 100의 자리 수(472 * 3)
	//4) 첫번째 숫자 곱하기 두번째 숫자(472 * 385)
	//ex) 첫번째 숫자 : 472
	//두번째 숫자 : 385
	//출력 결과 : 2360, 3776, 1416, 181720

	


	return 0;
}