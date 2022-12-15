#include<stdio.h>
int main()
{
	//1번
	//5개의 숫자를 입력받고 그 중에서 가장 큰 숫자와 작은 숫자를 찾으세요.
	/*
	printf("다섯개의 숫자를 입력하세요. ");
	int a, b, c, d, e;
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if ()
	*/
	
	printf("다섯개의 숫자를 입력하세요. ");
	int a, b, c, d, e, max, min;
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	max = a;
	min = a;

	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	if (e > max)
		max = e;


	if (b < min)
		min = b;
	if (c < min)
		min = c;
	if (d < min)
		min = d;
	if (e < min)
		min = e;

	printf("최대 : %d, 최소 : %d\n", max, min);



	
	//2번
	/*
	
	char se[100];
	char sen[100];
	printf("1번 문자열 입력 ");
	scanf_s("%s", se);
	printf("2번 문자열 입력 ");
	scanf_s("%s", sen);

	if (se == sen)
		break;
	else if()

	*/







	return 0;
}