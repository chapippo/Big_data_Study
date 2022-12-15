#include<stdio.h>
int main()
{
	//반복문
	//for , while , do while이 있는데
	//가장 대표적인 건 for

	//가나다 10번 출력
	for (int i = 0; i < 10; i++)           //반복문은 가운데 조건이 핵심
	{
		printf("가나다\n");
	}

	int count = 0;
	//count 값을 10번 찍음
	while (count < 10)
	{
		printf("count=%d\n", count);
		count++;
	}


	// while 안에 있는 조건이 거짓이더라도 
	// 무조건 한 번은 수행함
	// 참고로 현재 count는 10이라서 저 괄호조건은
	// 거짓
	do
	{
		printf("count=%d", count);
	} while (count < 10);



	return 0;
}