//포인터
//변수의 주소(=위치)를 저장하는 타입
#include<stdio.h>
void changeValue(int* p, int v)						//중괄호 안에 있는 변수들은 다 지역변수
{			//p 자체는 주소 //*p 는 주소가 가리키는 '값'
	*p = v; //p가 가리키고 있는 값을   //p는 주소이고 *을 넣어주면 값을 직접적으로 가리킴 !!!
}			//v로 바꾸는 것 !!!

void no_changeValue(int p, int v) //p의 값이 바뀔지언정 main에 있는 값은 바뀌지 않는다
{
			//이 안에 있는 값은 바뀌지만
	p = v;	//main이나 이 함수를 호출한 부분의 변수는 그대로이다
			//왜냐면 p는 이 함수 안에서만 존재하기 
			//때문
}

//2번 함수
void changeNumber(int* no1, int* no2)
{
	int temp = *no1;
	*no1 = *no2;
	*no2 = temp;
}

//4번
int inputNum(int* n)
{
	printf("%d", n);
	scanf_s("%d", &n);
	return n;
}

void printNum(int m)
{
	printf("%d", m);
}

//////////////////////////////////////////////////////////

int main()
{
	int ex = 10;

	int* exptr = &ex;
	//int*는 int타입 변수의 위치를 
	//저장

	changeValue(exptr, 100);
	printf("ex=%d\n", ex);

	changeValue(&ex, 500); //변수 ex의 주소를 넘긴 것 !!!
	printf("ex=%d\n", ex);


	//1번
	no_changeValue(exptr, 654220000);
	printf("ex=%d\n", ex);


	//2번
	int no1 = 3;
	int no2 = 5;
	//printf("%d %d", changeNumber(&no1, &no2)); //changeNumber의 반환값을 알아야지 출력이 되는데
											   //(반환값도 없고)모르니 출력이 안 될 수 밖에
	changeNumber(&no1, &no2);
	printf("%d %d\n", no1, no2);


	//3번
	int num1, num2;
	printf("두 개의 숫자를 입력. ");
	scanf_s("%d %d", &num1, &num2);
	changeNumber(&num1, &num2);
	printf("%d %d\n", num1, num2);

	
	//4번
	printf("4번) 두 개의 숫자를 입력. ");
	int a = inputNum();
	int b = inputNum();
	printNum(a);
	printNum(b);
	changeNumber(a, b);
	printNum(a);
	printNum(b);

	//이게 어디 쓰이냐면
	//함수의 매개변수로 주로 쓰임
	//scanf나 swap 함수 등...에서 주로 쓰임
	return 0;
}