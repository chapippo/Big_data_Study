#include<stdio.h>
//void printYourName(char n[]) //문자열을 넣고 그대로 출력		//배열 = 포인터 @@@@@@@@@@@@@
void printYourName(char* n)	   //문자열이라는 건 배열, 2,3줄 같음 
					   //=
{					   //n은 포인터 44줄
	printf("당신의 이름은 %s입니다.\n", n);
}
char* printABC()
{
	return "abc\n"; //문자열을 return 하는 것도 잘 된다
}		  //abc 는 값 자체 

//매개변수 없이 문자열을 입력 받아서 리턴하고 싶을 때는?????
char* returnMyInfo()										// ??? 50줄
{	
	static char mbti[5];			//static을 붙이면 잘 됨.. 왜?	(정적변수 선언)
	printf("mbti?");				//mbti는 포인터(배열)이고,어딘가를 가리켜야 하는데(mbti[5] 얘는 5칸짜리 주소를 가리킴)
	gets(mbti);						//이 함수(이 공간이)가 끝나면 사라짐 -> 없는 걸 가리키고 있으니 이상한 값이 나올 수 밖에
	return mbti;						//함수가 끝나도 '데이터 영역에 보관하고 있다' -> 그래서 static 붙임
										//DATA 영역 안에 배열 할당하면 프로그램 끝날 때까지 사라지지 않음
										//DATA 영역 안에 할당했다는 걸 보여주기 위해 static 사용
										// 결론 : 문자열을 입력한 뒤 return하고 싶다면 static 앞에 붙이기
	//return mbit; ->배열의 시작 주소 반환 @@@@@
}
char* returnMyMBTI(char* mbti)
{					   //---- 메인 안에 있는 녀석이니 그대로 return 가능

	//main에 있는 문자열을 가지고 와서, 다른 걸 하고 싶다면
	//매개변수로 해당 문자열을 받아와야 함
	return mbti; //매개변수로 받은 걸 그대로 리턴해보기
}
char* change(char n[])
{
	printf("바뀐 값 출력해보기");
	gets(n);
	return n;
}

int main()
{
	printf("이름 입력 ");
	char name[100];	//문자배열 = 문자가 여러개 들어감
	gets(name);		//문자가 여러개 들어감 = 문자열
	printYourName(name); //따라서 문자배열 = 문자열		//name 은 포인터 3줄

	printf("------------\n");

	printf("%s\n", printABC());

	printf("------------\n");

	//배열 = 포인터
	//name 배열은 name 포인터라고 봐도 된다.
	printf("%s\n", returnMyInfo());							// ??? 14줄			

	printf("------------\n");

	printf("%s\n", returnMyMBTI("ISFP"));//문자열 받아서 그대로 return도 잘 된다
	printf("%s\n", returnMyMBTI(name)); //매개변수로 특정한 문자를 넣으면 그대로 출력해준다

	printf("------------\n");

	printf("%s\n", change(name));

	return 0;
}