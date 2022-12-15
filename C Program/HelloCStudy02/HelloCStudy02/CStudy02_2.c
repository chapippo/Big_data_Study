#include<stdio.h>
int main()
{
	//1. scanf_s("%d\n", &age); 하지말기. \n 붙이는 거 아니다
	//2. 값을 입력받고 있는 게 있다면 그걸 끄고 
	// 다시 실행하기
	//3. (참고) 프로그램 켜자마자 아무것도 안 뜨는 데..
	//값을 입력해야 그 다음 단계로 넘어감

	//int age;
    //scanf_s("%d", &age);
	//printf("내 나이 : %d\n", age);

	int age;
	scanf_s("%d", &age);
	printf("내 나이는 %d살입니다.\n", age);

	//3번 태어난 연도 계산
	printf("나는 %d년생입니다.\n\n", 2022 + 1 - age);

	//4번 원의 반지름 r 값을 입력받고, 원의 넓이와 원의 둘레값 출력하기
	int r;
	printf("반지름 입력해봐?\n");
	scanf_s("%d", &r);
	printf("원의 넓이 : %f\n", r * r * 3.14);
	double area = 2 * r * 3.14;
	printf("원의 둘레 : %f\n\n", area);
	

	//5번 
	//byte를 입력받고 그에 해당하는 bit 찾기
	printf("몇 byte?\n");
	int byte;
	scanf_s("%d", &byte);
	printf("%d byte = %d bit\n\n", byte, byte * 8);

	//6번
	//bit를 입력받고 그에 해당하는 byte 찾기
	int bit;
	printf("몇 bit?\n");
	scanf_s("%d", &bit);
	printf("%d bit = %d byte\n\n", bit, bit / 8);


	//mybyte * 8 = mybit

	int mybyte = byte;
	int mybit = mybyte * 8;

	printf("%d byte * 8 = %d bit\n", mybyte, mybit);

	return 0; //코드 이동 : alt + 화살표 위나 아래로
}