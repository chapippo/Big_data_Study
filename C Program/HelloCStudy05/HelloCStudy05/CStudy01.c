//반복문에 대해서 계속 해보자
//break, continue 키워드 (while, do-while에서 다 쓰임) @@@@@@@ break는 switch문에서도
//while, do-while에 대해서 더 해보자.



#include<stdio.h>
int main()
{
	//break : switch에서도 쓰임
	//모든 반복문에서 쓰임
	//이 키워드 만나면 즉시 종료됨

	for (int i = 0; i < 1000; i++)
	{
		if (i > 5)
			continue;                              //이 반복문을 완전히 빠져나가겠다 (return 0;로)
		printf("이동준짱\n");
	}



	//continue : 종료시키진 않고 다음 단계로 skip함
	//1부터 10까지의 숫자를 출력하되, 짝수만 출력할 경우

	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)				//홀수를 만나면
			continue;              //i가 1,3,5,7,9일 때 continue 만나면  
							       //i++로 바로 넘어가  
		printf("숫자 : %d\n", i);  //여기를 실행하지 않음 
	}



	//while : ~ 하는 동안												@@@@@@@@@@
	//괄호 안에 있는 값이 true(참)이면 계속 실행

	int count = 0;
	while (count < 10)         //count가 10 이상이면 끝
	{
		count++;
		printf("count=%d\n", count);
	}


	while (1)  //무한 반복
	{
		if(count > 100)
			break;
		count += 10;
		printf("count = % d\n", count);
	}


	do
	{
		//while 안의 조건이 거짓이라도 꼭 1번은 실행함
		//while문은 괄호 (while () )안의 조건이 거짓이면 
		//1번'도' 실행하지 않는다.
		printf("1번은 실행함!!");
	} while (count < 100);


	return 0;
}