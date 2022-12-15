//CStudy12

#include<stdio.h>
//4. 매개변수로 받아온 문자열의 길이를 리턴
int length(char* str)
{
	//문자열의 길이를 구하려면, 그 문자열이 '끝날때까지' 반복문을 돌림
	//영문, 숫자, 특수문자, 공백은 모두 1byte
	//근데 한글이나 한자 등은 1글자당 2byte
	//조건문 체크하기도 힘들고 예외처리가 쉽지 않다.
	
	//한글에 예외처리 해보기!! @@@@@@@
	int len = 0;
	int count = 0;
	int index = 0;
	while (str[len] != '\0')
		len++;
	return len;
}
int main()
{
	printf("%d\n", length("abcd1234!가나다"));
	return 0;
}
