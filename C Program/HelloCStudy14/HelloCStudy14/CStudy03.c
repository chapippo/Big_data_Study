#include<stdio.h>
void Swap(int* a, int* b, int* c)
{
	int temp = *c;
	*c = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a, b, c;
	int aa2, bb2, cc2;
	printf("세 개의 숫자를 입력하시오. ");
	scanf_s("%d %d %d", &a, &b, &c);	
	aa2 = a;
	bb2 = b;
	cc2 = c;
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	Swap(&a, &b, &c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	//수동으로 해보기
	Swap(&a, &b, &c);
	Swap(&a, &b, &c);
	printf("%d %d %d\n", a, b, c);

	//do while을 안 쓸 경우엔
	//한 번 수동으로 변경하고 나서
	//그 다음에 반복문으로 원랙밧으로 돌아온 여부를 체크 가능

	//do while을 쓴 이유
	//처음엔 당연히 a,b,c가 aa2,bb2,cc2랑 값이
	//똑같다
	//그래서 그냥 while쓰면 바로 끝남
	//하지만 do-while을 쓰면 while 조건이 어떻든
	//무조건 한 번은 실행함
	//그리고 그 다음에는 조건에 따라서 반복문을 돈다
	do
	{
		Swap(&a, &b, &c);
		printf("a=%d b=%d c=%d\n", a, b, c);

	} while (aa2 != a); //&& bb2 != b && cc2 != c);
	printf("%d %d %d\n", a, b, c);

	/*
	for (int i = 0; i < 3; i++)
	{
		Swap(&a, &b, &c);
		printf("a = %d, b = %d, c = %d\n", a, b, c);
		/*
		if(i == 3)
		{
			printf("a = %d, b = %d, c = %d\n", a, b, c);
		}
		else
		{
			break;
		}
		
	}
	*/
	return 0;
}