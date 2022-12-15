#include<stdio.h>
extern int a;	//extern 는 CTest.c에서 온 변수 a
extern int b;	//심각도	코드	설명	프로젝트	파일	줄	비표시 오류(Suppression) 상태
//오류	LNK2001	확인할 수 없는 외부 기호 b	HelloCStudy11	D : \shareFolder\C 수업\HelloCStudy11\HelloCStudy11\CStudy03.obj	1

int main()
{
	//b++;	//여기서 문제 생김. static 붙어서 변수 b는 CTest.c 이외에선 못 씀
			//java, C#, C++의 private 같은 것
	a++;
	printf("%d\n", a);
	up_Print();	  //up_Print는 여기서
}

//글로벌 변수는 어디에서든지 가져다 쓸 수 있다

//근데 static이 붙은 것은 하나의 파일 안에서만 쓰이고 바깥에서 가져다 쓰지는 못 한다.

void printNum(int a)	//함수의 정의
{
	printf("\n%d", a);
}