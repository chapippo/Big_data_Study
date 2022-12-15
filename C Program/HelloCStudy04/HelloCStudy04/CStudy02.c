#include<stdio.h>
int main()
{
	// (증감 연산자) @@@@@@@@@

	int a = 5;

	a++;  //a=a+1;   a+=1;  다 같음  
	++a;
	a--;
	--a;

	printf("%d\n", ++a); 
	printf("%d\n", a++); // 출력을 먼저 하고 a라는 값을 넣음
	printf("%d\n", a);

	int b = a++ + ++a;
	printf("b=%d, a=%d\n", b, a);
	//16,9를 찍고 싶다면...             // 나쁜 예

	a = 7;
	a++;
	int c = a + a;
	a++;
	printf("c=%d, a=%d\n", c, a);       // 옳은 예





	return 0;
}