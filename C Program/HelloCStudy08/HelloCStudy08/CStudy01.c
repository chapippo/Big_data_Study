#include<stdio.h>
int main()
{
	//           <<< 알파벳 등장 횟수 문제 >>>

	//input에 NULL값으로 모두 채움
	char input[1024] = { NULL, };  //아무 것도 안 적으면 쓰레기 값이 들어가는데 null 적으면 null값 들어감
	//그렇다고 char input[1024] = { 1, };
	//이렇게 적었을 때 모두 1이 들어가지 않음.  //첫번째 칸만 1 들어감
	printf("문자열을 입력해주세요.");
	gets(input);
	int charAlpha[26] = { 0 }; //26칸짜리 배열을 만드는데 전부 0을 집어넣는다.    //쓰레기값이 없어야지 갯수를 제대로 카운팅할 수 있음
								//(두번째 칸에 7이 있다, 알파벳 b가 7개있는 것.  17열)

	//안 적으면 쓰레기 값 들어가있음
	//각 스펠링의 갯수는 의미. [0]에 10 있으면 a가 10개
	//[3]에 5가 있으면 d가 5개 있는 것
	for (int i = 0; input[i] != NULL; i++)
	{

		//소문자로 전부 통일 작업
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			input[i] += ('a' - 'A');                   //소문자로 바꾸고
		}

		//소문자 a보다 작거나 소문자 z보다 큰 경우
		//a~z 사이의 범위 벗어남(대문자는 이미 변환 작업 함)
		if (input[i] < 'a' || input[i] > 'z')                         //특수문자나 한글이 나오면 밑에 if로
		{
		/	if (input[i] == ' ')             //공백은 그냥 넘어가라
				continue;      //continue만 적고 다른 거 지우면
								//프로그램은 종료 안 되고
								//a~z까지만 숫자를 센다.

		/	printf("종료\n");
		/	return 0; //프로그램 자체를 종료시켜버림
		
			//break를 해도 상관은 없다.
			//그럴 경우엔 또 다른 변수를 만든다. 그렇지만 return을 하면 전체종료가 된다.+
		}
		//그 다음에 갯수를 센다.
		else //a~z인 경우								abcdaa
		{	//i=0(a)								i=0 i=4 i=5  에 a
			charAlpha[input[i] - 'a']++;                        //문자, 배열, 아스키 
		}			 //'a'라고 친다 
	}				 // 'a' -'a' = 0							charAlpha[0]++ =3
					 // 97 - 97 = 0

	for (int i = 0; i < 26; i++)
	{
		if (charAlpha[i] != 0)
			printf("'%c'는 %d글자입니다.\n", 
				'a' + i, charAlpha[i]);
		//i = 0
		//'a'+0 = 'a'
		//i = 1
		//'a'+1 = 'b'
	}



	return 0;
}