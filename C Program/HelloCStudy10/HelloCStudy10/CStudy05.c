#include<stdio.h>
#include"testsum.h"
//1번
int main()
{
	
	printf("변수 a, b, c를 입력하시오.");
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int result = testsum(a, b, c);
	printf("c의 배수 부분을 제외한 a부터 b까지의 합 : %d\n", result);
	

	//2번
	printf("Sec(초) 값을 입력하시오.\n");
	int s;
	scanf_s("%d", &s);
	clock(s);





	//2번
	//{
	//	printf("Sec(초) 값을 입력하시오.");
	//	int min, sec;
	//	scanf_s("%d %d", &min, &sec);
	//	int result = clock(min, sec);
	//	printf("%d분 %초\n", result);
	//}



	//3번

	//4번

	//5번
	int num1;
	int sum = 0;
	printf("1부터 num1까지의 합 ");
	scanf_s("%d", &num1);
	for (int i=1; i <= num1; i++)
	{
		sum += i;
	}
	printf("합은 %d\n", sum);




}