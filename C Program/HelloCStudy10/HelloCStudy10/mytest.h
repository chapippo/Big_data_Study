#pragma once //헤더파일 중복해서 적어도 허용해주는 표시
			// #pragma once가 없으면 stdio.h 중복해서 쓸 수 없다 @@@@@


#include<stdio.h>  //헤더파일이란 걸 이용해서 읽어오는 방식도 있다
//함수의 정의를 적고 있다.
void mytest()
{
	printf("mytest");
}

// XXXXXXXXXX

//이런식으로 정의랑 헤더 섞지 말자
//정의까지 다 적을 거라면 다~~~ 적어주고
//헤더만 적을 거라면 헤더만 적어준다.


//헤더 적을 거면 헤더만 쭉 적고, 정의를 적는 파일에는 정의를 쭉

//void metest(); //헤더만 쓴다       이렇게 같이 혼용하면 안 됨 XXXXXXXXXXXX