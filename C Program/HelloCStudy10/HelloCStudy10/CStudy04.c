#include<stdio.h>
int g = 0; //전역 변수 ('global 변수'라고도 부름) , main, up3,모든 곳 여기저기 다 쓰임

//지역변수를 매개로 하고
void up1(int l)  //변수 l은 up1이 끝나면 없어짐		//값만 (가지고서) 복사함          남남 
{												//메인에 영향을 주지 않음
	l++;
}

//지역변수의 위치(포인터)를 매개
void up2(int* l)									//주소지(위치) 가져옴             main에 영향을 줄 수 있다
{												//위치를 알려줬기 때문에 
	(*l)++;
}

//전역변수에 접근하고 있음
void up3()
{
	g++;
}

int main()
{
	int local = 10;
	up1(local); //local의 값을 넘김
	printf("local=%d\n", local); //10
	up2(&local); //local의 주소를 넘김
	printf("local=%d\n", local); //11
	up3(g);
	printf("g=%d\n", g); //1
}