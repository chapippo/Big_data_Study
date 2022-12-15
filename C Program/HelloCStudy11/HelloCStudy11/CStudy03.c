#include<stdio.h>
//변수의 종류
//전역 변수는 함수 밖에 선언

int g = 0;

static int s1 = 0; //static 키워드가 붙음 (정적 변수)

void upNum(int a, int b) //a,b 는 매개변수	//매개변수 = 지역변수
{						 //즉 함수가 끝나면 사라짐
	static int s2 = 0;	 //그럼 static이 붙은 건 어떤 걸까?
	a++;				
	b++;
	s2++;				 //s2 = 0이라고 써뒀지만 계속 증가한다  //s2는 지역변수는 맞다 , s2는 a,b와 다르게 프로그램이 다 끝나야지만 없어짐 
	g++;													//a,b는 함수 끝나면 없어짐
	printf("%d %d %d %d\n", a, b, g, s2);
}
int main()
{
	//지역 변수는 함수나 중괄호 안에 선언함
	int num = 10;
	if (num > 0)
	{
		int n = 100; //변수 n은 num이 양수여야 존재함
		upNum(num, n);										//upNum을 계속 실행해도 
		upNum(num, n);
		upNum(num, n);
		printf("n=%d, num=%d\n", n, num);
	}
	g++; //전역 변수는 함수 어디에서든지 쓸 수 있다
		 //g는 바깥에 있다

	printf("g=%d\n", g);
	//upNum(num,n); //변수 n은 if문 안에서만 됨!!!!! @@@@@
	//printf("n=%d, num=%d\n",n,num);
	return 0;
}