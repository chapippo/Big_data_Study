#include<stdio.h>
int main()
{
	//   2번
	//문자열 2개를 입력받고, 이 2개가 같은지 다른지 여부를 출력해주세요
	char sentense1[1024];
	char sentense2[1024];
	printf("문자열1 입력해주세요.");
	gets(sentense1);
	printf("문자열2 입력해주세요.");										//gets 끼리 입력 받으므로 rewind 는 필요없다
	gets(sentense2);														//scanf 는 필요함

	//for(초기변수세팅 ; 실행조건 ; 증가연산)
	//초기변수 세팅 : int i = 0;
	//실행조건 : i < 10;				!=  앞에 값이 뒤에가 아니면
	//증감연산 : i++이나 i--를 넣는다.

	int i = 0; //for 바깥으로 뺌											//senten-1에 
	for (i = 0; sentense1[i] != '\0' && sentense2[i] != '\0'; i++) 			//첫번째 문자도 널값이 아니고, 두번째 문자도 널값이 아니고
																			//둘다 null 값이 아닐때는(안 끝났을때는) 계속 돈다, 동시에 끝나야, 둘중에 하나라도 널값이 나오면 끝남, 길이가 다르니까 다른 문자 
	{																		//글자수는 4글자로 같은데 내용이 다를 경우 if문으로 들어감
		if (sentense1[i] != sentense2[i])	
		{
			i = -1;              //한 글자라도 다른게 있어서 끝났다면 -1을 넣어서
			printf("이 문장은 다릅니다.\n");									//포인터, 배열,, 문자열이라는 건 캐릭터의 배열    @@@@@@@@@@@@@@@@@@@@
			break;
		}
	}
	if (i != -1)
	{
		if (sentense1[i] == sentense2[i]) //완전 똑같으면 완전 똑같아
			printf("둘은 똑같다. %s %s\n", sentense1, sentense2);               // 노민영 엔터 노민용
		else
			printf("둘은 길이가 다릅니다.");
	}



	return 0;
}