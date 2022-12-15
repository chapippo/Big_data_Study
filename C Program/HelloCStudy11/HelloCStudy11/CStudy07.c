#include<stdio.h>	//글로벌 변수로 풀던지, 함수로 풀던지
int a;
int b;

void g_swap()
{
	int temp = a;
	a = b;
	b = temp;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	printf("숫자 2개 입력하시오. ");
	scanf_s("%d %d", &a, &b);
	printf("%d %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("%d %d\n", a, b);


	g_swap();
	printf("%d %d\n", a, b);


	int num1, num2;
	printf("num1, num2에 값 넣기 ");
	scanf_s("%d %d", &num1, &num2);
	swap(&num1, &num2);	//num1과 num2의 주소지를 넘겨줌 //swap 함수 안에서 변화가 일어난다면
	printf("%d %d\n", num1, num2);					 //(main에 있는) 위에 num1, num2에
													 //영향을 줄 수 있다
	
	return 0;
}