#include<stdio.h>
#include"mytest.h"
#include"yourtest.h"
void test(); //원형(반환형 매개변수 형태)     //@함수의 선언 2번



int main()
{
	test();
	mytest(); // mytest.h에서 읽어온 함수  //헤더파일을 쓰면 CStudy의 양을 줄일 수 있다
										   //헤더파일에 적으면 되니..
	
}										  

void test() //정의
{
	printf("함수 테스트.");
	return;
}

//원형을 적을 때는 끝에 세미콜론을 붙이고 
//정의를 적을 때는 세미콜론 X