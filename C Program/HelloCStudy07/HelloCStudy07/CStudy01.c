#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;      //4byte , 정수 : 소수점이 없는 숫자 ,   음수 0 자연수

	double b = 3.14; //실수 , 소수점 있는 숫자
	char c = 'A';    //문자 , 한 글자를 의미, 그런데 이 한 글자를 숫자로 변환이 가능 , 아스키코드표상 'A'는 65
	
	

	//변수에 저장된 값과, 변수의 주소 출력
	// \는 escape 문자라고 부름

	// &a : a의 주소 = a의 위치 @@@@@@@@@@
	
	// 주소 : &변수																	값을 담고 있는 변수는 주소가 있다
	// 주소를 저장하는 타입의 변수를 : '포인터' 라고 부르기로 함                    @@@@@@@@@

	// %d = decimal, 10진수 정수를 의미
	printf("%d %d\n", a, &a);
	// %f = float, 실수...
	printf("%f, %d\n", b, &b);

	//주소를 저장하는 게 포인터                   @@@@@@@

	//int는 정수를 저장하는 변수
	//int*는 정수변수를 저장하는 정수 포인터
	int* ptr_a = &a;												//int*는 단순히 값을 저장x, 변수의 위치를 저장


	//대용량의 데이터를 관리할 때 <배열>이 쓰임
	// <배열> 이라는 것을 씀
	int numbers[5];       //5 는 칸수!! , "5개의 숫자를 저장" , []에는 내가 저장하고 싶은 숫자의 갯수
							//숫자 5개를 저장하는 게 아니라, 시작 위치를 저장하는 것                @@@@@@@@@
							// p[0] = 첫번째 = numbers[0]
							// p[4] = 다섯번째(마지막) = numbers[4]
		
	numbers[0] = 100;
	numbers[4] = 1000;

	int* p/*(tr_n)*/ = numbers;           //p라는 녀석이 시작 위치!!를 가리킴, numbers 또한 시작 위치!!를 가리킴
								//numbers 자체가 위치라서 & 안 붙임..  @@@@@@@

	a = 100;

	int* test = (int*)malloc(sizeof(int) * a);
	//int test[a]


	// 추가
	int* ptr_a = &a;//int 타입이 아니라 int*타입
	*ptr_a = 1; // -------------->       ㅁㅁ
	printf("%d", *ptr_a); // ----------> ㅁㅁ   1이 출력됨
	




	//ptr_a 랑 p는 변수의 위치를 저장
	//그 중에서 p는 numbers와 마찬가지로
	//5칸짜리 데이터의 시작 위치를 저장함
	//그리고 그 위치 안에 있는 데이터에 접근하려면
	//[0] 이렇게 대괄호 연산을 쓰면 된다.

	
	return 0;
}