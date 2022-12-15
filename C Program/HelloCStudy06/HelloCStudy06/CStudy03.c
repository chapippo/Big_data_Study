#include<stdio.h>
int main()
{
	//포인터 = 변수의 주소 혹은 위치
	int a = 10;
	int* ptr_a = &a;        //&는 컴퓨터 메모리상 위치
	(*ptr_a)++;             //ptr_a는 a를 가리키는데 ptr 앞에다가 * 붙이면 //이거 핵심 @@@@@ 
	printf("a=%d\n", a); //11							//(이건 안쪽에 있는 값을 가리킴,++이니 11)

	a++;
	printf("ptr_a가 가리키는 곳의 값 : %d\n", *ptr_a); //12
	printf("ptr_a : %d\n", ptr_a);//이건 그냥 주소 (값) 
	printf("a=%d\n", a); //12

	a = 12;
	int b = a;
	b++;
	printf("a=%d\n", a);            // a와 b는 서로 남남
	printf("b=%d, a=%d\n", b, a);   // b가 a의 값을 가져왔으나 b가 증가된다고 a가 증가되진 않음
									//


	return 0;
}