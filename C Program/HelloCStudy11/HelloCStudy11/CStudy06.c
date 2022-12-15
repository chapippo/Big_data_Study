#include<stdio.h>
//이 a,b는 main의 a,b와 아무 상관없다.
//이 a,b가 값 바뀌어도 main의 a,b는 그대로
void printBig(int a, int b)
{
	if (a >= b)
	{
		printf("%d\n", a);
		return;		//중간에 끝내버리고 싶을 때, 리턴 타입이 void일 때 강제종료하고 싶을 때 return; 쓰면 된다
	}
	printf("%d\n", b);
}

int findBigReturn(int a, int b)
{
	if (a >= b)
		return a;
	//else //b가 a보다 클 경우... else 안 적어도 됨, else 넣어도 되고 안 넣어도 되고
	return b;
}


int main()
{
	//main에서 해보기
	//1번 : 둘 중 더 큰 거 출력
	int a, b;
	printf("숫자 두 개 입력(3 5 이렇게)\n");
	scanf_s("%d %d", &a, &b);

	//삼항 연산자
	//a가 b보다 크거나 같으면 a 출력
	//그게 아니면 b 출력
	a >= b ? printf("%d\n", a) : printf("%d\n", b);
	
	//삼항 연산자 없이 하기
	if (a >= b)
		printf("%d\n", a);
	else
		printf("%d\n", b);


	printBig(a, b);		//main 안에 쓰려면 이렇게만 쓰면 된다
	
	int result = findBigReturn(a, b);
	printf("%d\n", result);
	return 0;
}