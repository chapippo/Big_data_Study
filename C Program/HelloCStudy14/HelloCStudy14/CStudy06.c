#include<stdio.h>
//조건문 안에 함수 넣을 때 유의하며 넣자

int test1()
{
	printf("test1!!!!!");
	return 0; //test1이 0을 반환하기 때문에 글자는 반환할 수 있는데 메인에 printf는 출력 x
}
int test2()
{
	printf("test2~~~~~");
	return 1;
}
int test3()
{
	printf("test3@@@@@");
	return 2;
}

int main()							//if 문 안이 아예 거짓이 되면 실행 x
{
	if (test1())
	{
		printf("이건 절대 출력 안 됨");
	}
	//주의 사항!
	//1번
	//함수가 2개 이상 나오게 되고
	//&&로 엮였을 때
	//앞에꺼가 false(0)이면 뒤에껀 아예 호출도 안 함

	//내 의도 : test1(), test2() 모두 호출한 뒤
	//그 결과에 따라서 if문 안쪽에 있는 걸 실행하려고 했다
	//근데... 지금 이런 경우는... test2를 아~예 실행 안 함


	if (test1() && test2())			//test1의 결과가 false이므로 test2는 아~~~예 실행 안 함
	{								//이렇게 조건문에 함수 넣는 건 가능은 한데 조심 @@@@@
		printf("이건 출력될까나");
	}
	printf("\n");

	//주의사항 2번
	//OR(||)이면 앞에꺼만 실행하고
	//뒤에꺼 실행 안 함
	//왜냐면 어차피 앞에꺼가 true(=0 아님)가 되면
	//뒤에껀 볼 것도 없이 if 안에 있는 조건이 참이기 때문
	printf("\n----------------\n");
	if (test2()!=0 || test3()!=0)
	{
		printf("test3는 실행 안하고 그냥 2만 실행할 수도 있다");
	}

	//바른 사용법
	int result1 = test1();
	int result2 = test2();
	int result3 = test3();
	//변수 선언해서 함수의 리턴을 받고
	//그 다음에 조건문에 집어넣는다.

	if (result3 || result2 || result1)
		printf("제대로 함수 실행하고 검사를 할 것이다. ");

	return 0;
}

