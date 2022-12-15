#include<stdio.h>
int main()
{
	//scanf와 printf도 함수
	
	int result = printf("Hello"); 
	printf("\n%d\n", result);          //5가 나옴, byte수를 return함
	int n, m;								//함수는 기능
	int a = scanf_s("%d", &n);              //scanf는 입력 받는 기능, 기능 : 값 입력받음
	int b = scanf_s("%d %d", &n, &m);		//scanf가 반환하는 것 = 반환값(형)(=return 값), 입력받을 변수의 개수
				  //----------------		//scanf 안에 밑줄은 매개변수( = parameter)
	result = printf("%d %d", n, m);
	printf("\nresult = %d, a = %d, b = %d\n", result, a, b);


	return 0;
}