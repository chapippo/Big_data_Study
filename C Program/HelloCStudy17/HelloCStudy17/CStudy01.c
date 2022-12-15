#include<stdio.h>
//실습4(0728)
//1번) 2D 게임 캐릭터 좌표 저장하는 구조체 만들기 (하고 6,7번 같이)
//1개의 변수가 1개 이상의 값을 가짐
struct Game2DPos
{
	int x;
	int y;
}typedef Game2DPos;
int main()
{
	//구조체 : struct 
	//사용자가 직접 만든 자료형
	//크기도 다양
	//배열이랑은 다름 @@@
	//1개의 변수가 여러 가지의 속성을 가짐
	
	struct Game2DPos p1 = { 10,20 };
	printf("%d\n", sizeof(p1));
	//사이즈 : 8         (구조체는 배열이 아님)
	//이유 : 4byte가 한 변수에 두개 있음
	struct Game2DPos p2 = { .x=10,.y=20 };
	struct Game2DPos p3;
	p3.x = 10;
	p3.y = 20;
	struct Game2DPos p4;
	scanf_s("%d %d", &p4.x, &p4.y);
	printf("영우의 위치 %d %d\n", p4.x, p4.y);
	return 0;
}