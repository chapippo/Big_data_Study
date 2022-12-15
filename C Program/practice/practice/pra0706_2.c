#include<stdio.h>
int main()
{

	// 4번
	printf("문장을 입력하시오. ");

	char s2[1024];
	char r[1024]; //뒤집힌 거 저장하기
	int index = 0;//원본의 크기
	int count = 0;//복사본(반전본)의 인덱스
	
	gets(s2);
	
	while (s2[index] != NULL)               //문자열의 길이를 세본다, 널값이 아닐 때까지
		index++;							//ex) abcd라면 길이는 5, 5번째가 널값
	//index가 s2의 문장 끝(=NULL)을 가리키면 끝남

	//index-1 : NULL 바로 앞. 즉 문장의 끝
	//abc 입력하면 abc'\0' 이렇게 되는 데...
	//index-1이면 c를 가리킴.

	//i-- 하면서 첫번째 글자까지 읽어들임
	//count는 r배열의 인덱스
	//s2에 있는 글자를 뒷부분부터 가져와야 하는 데
	//r배열의 앞부분부터 채워야 함
	for (int i = index -1; i >= 0; i--, count++)             //index -1 에서 -1은 널값을 빼는 것
	{														//count는 밑에 줄 새로운 값을 저장할 
		printf(" %c ", s2[i]);//거꾸로된거출력
		r[count] = s2[i];//거꾸로 된 거 쌓기
	}
	r[count] = NULL;//최종적으로 마지막에 NULL         count번째 끝에 널값을 넣어주면 끝난다
	printf("\n%s\n", r);

	return 0;
}