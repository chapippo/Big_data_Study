#include<stdio.h>
int main()
{
	//1번
	printf("안녕하세요 제 이름은 차승화입니다.\n");


	//2번
	int age;                   //나이를 입력 받아야겠지
	printf("나의 나이는?");
	scanf_s("%d", &age);
	printf("내 나이는 %d살입니다.\n", age);


	//3번
	/*피타고라스의 법칙 결과 출력하기 (a^2 + b^2 = c^2 에서의 c^2 값 출력하면 됨)
	입력1: 3
	입력2: 4
	출력 : 25 */
	printf("a^2+b^2=c^2을 출력하라.\n");
	printf("a는?");
	int a, b;                                       //변수, 입력한 값을 저장하는 것 @@@@@@@@@@@, 뒤에 출력할 때 씀
	scanf_s("%d", &a);
	printf("b는?");
	scanf_s("%d", &b);
	printf("%d\n", (a * a + b * b));


	printf("입력1: ");
	scanf_s("%d", &a);
	printf("입력2: ");
	scanf_s("%d", &b);
	printf("출력 : %d\n", (a * a + b * b));


	//4번 
	/*printf("이름은?\n");
	rewind(stdin);
	char name[100];
	gets(name);
	printf("내 옆자리 학생의 이름은 %s입니다.\n", name);*/


	char name[100];
	printf_s("옆자리 학생의 이름은?\n");
	rewind(stdin);
	//scanf_s("%s", name, sizeof(name));   //scanf 쓰면 space바 짤림       //숫자는 scanf @@@@@@@@
	gets(name);                                                      //문장 입력할 때는 gets를 쓰자 @@@@@@@@@
	printf("내 옆자리 학생의 이름은 %s입니다.\n", name);



	//5번
	/*달러를 입력받으면 그에 따른 출력
		입력 : 1
		출력 : 1298.89 달러*/
		//int money;
		//printf("원으로 바꾸고 싶은 달러는?\n", money);
		//scanf_s("%.2f", &money);
		//printf("%.2f\n",money*1298.89);

	double dollar;
	printf("입력 : ");
	scanf_s("%lf", &dollar);
	printf("출력 : %.lf KRW\n", dollar * 1298.89);   //



	return 0;
}