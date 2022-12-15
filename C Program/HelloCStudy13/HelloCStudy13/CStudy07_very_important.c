#include<stdio.h>
void swap(int* pa, int* pb)		//함수를 통해서 메인에 있는 값을 바꿔준다
{								//no_changeValue와는 다르게 서로 영향을 준다 @@@@@
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{
	int a = 3;						//2,3번은 같은데 2번은 변수 내가 직접 입력해줌
	int b = 5;
	swap(&a, &b);
	printf("%d %d", a, b); //5 3 출력
	return 0;
}