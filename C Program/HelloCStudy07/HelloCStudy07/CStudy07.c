#include<stdio.h>
int main()
{
	// 1번 
	// 입력한 문자열 중 영어가 보이면 무조건 대문자로 바꾸기

	printf("문장을 입력하세요. ");
	char s1[1024];
	char s2[1024];
	gets(s1);
	int diff = 'a' - 'A';								 // 대소문자간의 차이 구해놓기
	for (int i = 0; s1[i] != NULL; i++)                  //s1의 값을 null 값이 나올 때까지 읽는다
	{
		
		// a~z까지의 값인 경우
		if(s1[i] >= 'a' && s1[i] <= 'z')                 // ex) Dongjoon Lee  , 공백은 소문자랑 대문자 사이에 
														 //있는 값이 아니라서 영향 x
		{ 													
			s1[i] -= diff;
		}
	}
	printf("1. %s\n", s1);





	// 2번
	// 입력한 문자열 중 영어가 보이면 무조건 소문자로 바꾸기

	for (int i = 0; s1[i] != NULL; i++)          
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s1[i] += diff;								//소문자가 더 크니 더해줘야
		}
	}
	printf("2. %s\n", s1);



	// 3번
	// 입력한 문자열 중 영어가 보이면 무조건 대소문자를 반대로 바꾸기

	printf("문장을 다시 입력하세요. ");
	gets(s2);

	for (int i = 0; s2[i] != '\0'; i++)         //널값이 아닐때는 돌고 널값이 나오면 끝
	{
		if (s2[i] >= 'a' && s2[i] <= 'z')
			s2[i] -= diff; // 대문자로 변환
		else if (s2[i] >= 'A' && s2[i] <= 'Z')
			s2[i] += diff; // 소문자로 변환                 //if, if면은 원복 돼서 if, else if @@@
	}
	printf("%s\n", s2);


	// 4번
	// 입력한 문자열을 거꾸로 바꿔서 출력하기

	printf("거꾸로 바꿀 문장을 입력하세요. ");
	char r[1024];
	int index = 0;
	int count = 0;
	gets(s2);


	while (s2[index] != NULL)
		index++;
	for (int i = index - 1; i >= 0; i--, count++)
	{
		printf("%c ", s2[i]);
		r[count] = s2[i];
	}
	
	r[count] = NULL;
	printf("\n%s\n", r);
		




	char r[1024]; //뒤집힌 거 저장하기
	int index = 0;
	int count = 0;
	while (s2[index] != NULL)
		index++;
	//index가 s2의 문장 끝(=NULL)을 가리키면 끝남

	//index-1 : NULL 바로 앞. 즉 문장의 끝
	//abc 입력하면 abc'\0' 이렇게 되는 데...
	//index-1이면 c를 가리킴.

	//i-- 하면서 첫번째 글자까지 읽어들임
	//count는 r배열의 인덱스
	//s2에 있는 글자를 뒷부분부터 가져와야 하는 데
	//r배열의 앞부분부터 채워야 함


	//          2,1,0 -> 3번 돈다
	//            2         _______
	for (int i = index - 1; i >= 0; i--, count++)
	{
		printf(" %c ", s2[i]);//거꾸로된거출력
		r[count] = s2[i];//거꾸로 된 거 쌓기           
	}
	r[count] = NULL;//최종적으로 마지막에 NULL
	printf("\n%s\n", r);






	//배열 문자열 조건문 반복문 @@@@@@@@@@@@@@@@@@@@@@@@@@

	//		65 A     90 Z      
	//		97 a    122 z
		   
	//	    -32      -32


	/*
	
	char sentense[1024];
	printf("문자열 입력하세요. ");
	for (int j = 0; j < 26, j++)
		printf();
	
	*/

	
											//pra0706_2를 참고 @@@
	return 0;

}