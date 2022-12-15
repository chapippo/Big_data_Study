#include<stdio.h>
int main()
{

	//문자 ('' 안에 있음)
	//문자열 ("" 안에 있음. 문장 혹은 string이라고 함)

	char c = 'A';             
	char mbti[5];// = "ISTP"; //   뒤에 자동으로 'null', '\0' 값이 들어감    //문자열을 넣고 싶으면 문자 배열을 넣으면 된다.
	char* m = mbti;
	//gets(m); 은 쓰면 안 됨. 문자 배열의 길이를 모르니, 쓸려면 크기 지정 후 @@@@@@@@@

	char bType[3];
	bType[0] = 'A';
	bType[1] = 'B'; //bType에 AB라고 쓴 거
	bType[2] = NULL; // 혹은 '\0' 넣기                                //널값을 넣어준 상태여야 제대로 출력이 된다 @@@@@@@@@
	char bloodType[3] = "AB";
	char name[7] = "이동준";    //최소 6칸이 필요한데 null 값 때문에 7
	char mbti2[100] = "ENTP"; //생각하기 귀찮으면 넉넉하게 잡기

	//문자열 입력받기
	printf("mbti는?\n");
	gets(mbti);
	printf("%s\n", mbti);

	//문자 입력받기
	printf("알파벳 하나 입력해보기\n");        //왜 필요없지?????                  @@@@@@@@@@
	//rewind(stdin);  gets 뒤에는 쓸 필요 없다 
	//문자나 문자열을 입력받을 때 위에서 뭔가 입력받은 게 있으면 반드시 추가해줘야 하는 코드
	//엔터키(\n)가 버퍼라는 메모리에 남아 있어서 그걸 반드시 삭제해줘야 한다.
	c = getchar();
	printf("%s %c", mbti, c);
	printf("다시 문자 입력");
	//rewind 안 넣으니까 엔터키가 getchar에 들어가버림
	//단!! 직전에 입력받을 때 썼던 코드가 gets라면 
	//필요없음
	//대신 scanf거나 getchar일 경우엔 rewind가 필요
	//숫자만 입력받을거라면 rewind 안 써도 되고, 문자나
	//문자열을 입력받을 땐 써야 함
	rewind(stdin);
	c = getchar();
	printf("c=%c\n", c);

	rewind(stdin);
	printf("aaa");
	char ch;
	char ch2;
	char myname[100];
	gets(myname);
	ch = getchar();

	//gets로 입력 받으면 버퍼에 엔터키가 안 남음                @@@@@@@@@@@@@@@@@@@@@@@  rewind 안 써도 됨


	return 0;
}