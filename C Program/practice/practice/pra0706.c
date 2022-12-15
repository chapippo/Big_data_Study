#include<stdio.h>
int main()
{
	//1번 
	// 입력한 문자열 중 영어가 보이면 대문자로 바꾸기
		
	printf("문장을 입력하시오. ");
	char s1[1024];
	gets(s1);
	int diff = 'a' - 'A';			// 대소문자간의 차이 구해놓기
	for (int i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= diff;
		}
	}
	printf("1. 대문자 : %s\n", s1);
	


	//2번
	// 소문자로 바꾸기

	for (int i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s1[i] += diff;
		}
	}
	printf("2. 소문자 : %s\n", s1);



	//3번
	//영어가 보이면 무조건 소문자로 바꾸기
	printf("무조건 소문자로 바꿀 문장을 입력하시오. ");
	char s2[1024];
	gets(s2);
	for (int i = 0; s2[i] != '\0'; i++)
	{
		if (s2[i] >= 'A' && s2[i] <= 'Z')            //대문자 A부터 대문자 Z 까지면 변환
			s2[i] += diff; //소문자로 변환
		else if (s2[i] >= 'a' && s2[i] <= 'z')			//else는 왜 쓰는가 복습 @@@@@@@@@@@
			s2[i] -= diff; //대문자로 변환
		}
	printf("%s\n", s2);




	return 0;
}