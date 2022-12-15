#include<stdio.h>
#include<stdlib.h>	//srand, rand를 사용하기 위한 헤더파일
#include<time.h>	//time을 사용하기 위한 헤더파일
void main()
{
	int lotto[7];		//추첨된 숫자를 저장할 배열
	srand(time(NULL));	//난수 초기화
	//int random = 0;		//정수형 변수 선언
	for (int i = 0; i < 7; i++)
	{
		lotto[i] = rand() % 45 + 1;	//1~45 사이의 숫자를 뽑아서 random 변수에 저장
		for (int j = 0; j < i; j++)	//로또에서 중복은 없으므로 중복 제거를 위한 for문
		{
			if (lotto[i] == lotto[j])
			{
				i--;	//중복이 발견될 경우 i번째 숫자를 다시 뽑는다.
				break;
			}
		}
		//printf("%d\n", random);	//출력
	}
	for (int k = 0; k < 7; k++)	//출력용
	{
		printf("%d ", lotto[k]);
	}
	printf("\n");
}