#include<stdio.h>
#define MAX 1024 // 매크로 상수 선언

//이걸로 배열의 크기 정할 수 있다.
//단, 변수로는 크기 지정 안 됨
//하려면 malloc, calloc 이런 거 써야 함

int main()
{
	//   <<< 알파벳 최초 등장 위치 >>>
	char input[MAX] = { NULL };
	int index = 0;
	printf("문장 입력하세요. ");
	gets(input);
	int charAlpha[26] = { 0 };  //-1로 채우는 게 더 수월할 수 있다. 해보기 // 0으로 통일
	for (int i = 0; input[i] != NULL; i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
			input[i] += ('a' - 'A');
		if (input[i] < 'a' || input[i]>'z')                    //의도는 언제 최초 등장했는지 체크해야 되는데 이 줄에 else가 붙으면 대문자가 소문자로 바뀌고 이 줄을 그냥 건너뜀
			continue; // 영문자만 세고 나머지는 다 스킵								//그래서 else를 떼야 됨      //대문자를 소문자로 '바꾸고' if if else ㅇ , if else if else X
		else
		{
			index = input[i] - 'a';
			charAlpha[index];
			
			if (charAlpha[input[i] - 'a'] == 0) // 최초 등장시     0이라면 다른 값을 안 넣어주고
				charAlpha[input[i] - 'a'] = i + 1;                 
			
												//ex) abca 라면 4번째 a일 때는 위에식에 이미 1이 들어가있으므로
			//첫번째 등장시 0이 아닌 1넣어야 하므로							  // 처음 등장만 나옴!!!!! 나오질 않음
			//항상 i+1을 넣는다.										@@@@@@@@@@@@@@@
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (charAlpha[i] != 0)
			printf("%c는 %d번째 처음 등장\n", 'a' + i, charAlpha[i]);
	}

	return 0;
}