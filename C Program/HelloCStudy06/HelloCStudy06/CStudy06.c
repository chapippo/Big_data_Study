#include<stdio.h>
int main()
{
	int numbers[6] = { 0, }; //6개의 숫자를 저장 //1을 쓰면 1,0,0,0,0,0   //안 적으면 임의의 쓰레기 값이 들어가있다.
	//{0,}; <- 0으로 초기화

	char a = 'A';
	char b = '가'; //'가'는 1바이트가 아님, '가'를 표현하려면 두 칸 이상이 필요

	//char 1바이트 
	//int 4바이트 
	//double 8바이트 
	//long long 8바이트



	//널값을 안 넣어주면 출력했을 때 이상한 쓰레기 값이 뜬다.
	char mbti[5] = "ISTP"; //5개의 문자, 단 마지막 글자는 '\0'(널)
	
	int* ptr_n = numbers;
	char* m = mbti;


	*(m + 2) = 'E';// mbti[2] = 'E'; // m[2]='E'; // +2를 넣으면 "ISEP"가 출력됨, 시작점에서 한칸, 두칸 뒤에

	//*m = 'E';  (제일 첫번째 글자를 바꾸는 것)								@@@@@@@@@@@@@@
	*ptr_n = 100;  // numbers[0] = 100; //ptr_n[0] = 100;

	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2],			//~칸뒤 numbers[2] 이런 것들을 인덱스라고 부른다
		numbers[3], numbers[4], numbers[5]);									//numbers를 출력하려면 이렇게 쓰라

	printf("%s", mbti); //ISTP -> ESTP

	//참고로 배열에 값 넣는 방법 2번째
	//1번째는 ptr+1 이런식으로 넣었음

	numbers[1] = 100;
	scanf_s("%d", &numbers[1]); //2번째 방법 -> 이걸 좀 더 잘 씀        , 인덱스 쓰고 @@@@@@@@
	scanf_s("%d", numbers + 2); //1번째 방법 (두 칸 뒤니까 세 번째)              @@@@@@@@@@@@@@@@@@@
	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2],
		numbers[3], numbers[4], numbers[5]);

	rewind(stdin);
	gets(m); //문자열 입력도 됨.            //gets나오면 엔터친 걸로 나오기 때문에 rewind 해줘야
	printf("%s", mbti); //ISTP -> ESTP
	printf("%s", m); //ISTP -> ESTP




	//char 배열 대신 char* 하면
	//gets 입력이 안 됨...
	//저 위에꺼가 된 건 원본이 char 배열이라서 그럼..

	printf("\ntest\n");
	char* char_test = "aa";   //이렇게 적게 되면 길이를 몰라 gets로 입력이 안 됨,대입은 되는데
	gets(char_test);					//길이를 몰라 어디가 널값인지 모르니까 gets 사용X
	printf("%s", char_test);




	return 0;
}