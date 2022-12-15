#include<stdio.h>
int main()
{
	
	/*int num, num2;
	printf("숫자 num 값 입력하기 ");
	scanf_s("%d,%d", &num, &num2);

	num % 2 == 0 ? printf("짝\n") : printf("홀\n");
	num != 0 && num % 2 == 0 ? printf("num은 짝\n") : printf("num=0\n");*/
	///////////

	if (0)
	{
		int x, y;
		printf("숫자 2개 입력해보세요. ");
		scanf_s("%d,%d", &x, &y);

		if (x > 0 && y > 0)
			printf("1");
		else if (x < 0 && y>0)
			printf("2");
		else if (x < 0 && y < 0)
			printf("3");
		else if (x > 0 && y < 0)
			printf("4");
		//else if (x == 0 || y == 0)
			//printf("0");
		else
			printf("0");

	}







	//2번


	/*int age;
	printf("나이를 입력하세요.");
	scanf_s("%d", &age);

	if (age < 20)
		printf("미성년자");
	else if (20=< age =<50)
		pri   */



		/*int age;

	scanf_s("")
	if (age < 20)
		printf("미성년자");*/



	//#region tab tab
#pragma region 두번째 문제

/////////#region
	if (0)
	{
		printf("나이를 입력하세요.");
		int age;
		scanf_s("%d", &age);
		if (age < 0 || age>200)
			printf("\n타노스\n");
		else
		{
			if (age < 20)                                     //age는 0이상이라는 게 전제
				printf("\n미성년자\n");
			else if (/*age >= 20 && (생략가능 )*/ age <= 50)
				printf("\n사회의 주 구성원\n");
			else if (age <= 70)           // 51~70세까지
				printf("\n관리자\n");
			else if (age >= 71)             // else로 끝내도 되긴 함
				printf("\n지혜의 도서관\n");     //else if로 끝내도 된다. 억지로 else 안 써도 됨
		}


	}


	//else 는 이 조건이 아니면
#pragma endregion

	
	//3번
	//맞춰놓은 시간 45분 전에 미리 알람
	// 시간 H , 분 M
	//int time;
	//printf()

		/*int h, m;
		scanf_s("%d", &h);
		scanf_s("%d", &m);
		m = m - 45;
		if (m < 0) 
			{
			if (h == 0)	
			{
				h = 23;
			}
			else 
			{
				h = h - 1;
			}
			m = 60 + m;
			printf("%d %d\n", h, m);
			return 0;
			}
		printf("%d %d\n", h, m);*/



	//5,   6,9
	//m 60을 더했기 때문에 h(시간)을 하나 뺌


	int h, m;

	                                                        //INPUT_TIME:
	printf("시간 입력하기");
	scanf_s("%d", &h);

	if (h >= 24)
	{
		printf("\n값이 너무 크니까 다시 입력하세요.");
	}
		                                                      //goto INPUT_TIME; //goto는 되~~도록이면 쓰지말자.
						               // 쓰면 안됨. 잘하는 사람은 진짜 잘 쓰고 그래픽쪽에선 이걸 어쩔 수 없이 쓰는 경우가 있다.


	h = h % 24;                     // 시간은 0시부터 23시까지이므로 너무 큰 시간을 입력해도 24로 나눈 나머지로 값을 바꾸게 되면
				                    // h값은 무조건 0부터 23이 나온다.
	h %= 24;                        //위의 코드랑 똑같음
		
	printf("분 입력하기");
	scanf_s("%d", &m);

	m %= 60;                          //혹시 60 넘으면 60으로 나눈 나머지로 바꿔버린다.

	printf("이제 45분전 시간을 세팅해드리겠습니다.\n");

	m = m - 45;                        // m-=45;
	if (m < 0)
	{
		m = m + 60;                       // m = m+60;
		h = h - 1;                        // h = h-1;
		if (h < 0)
			h += 24;
	}
	printf("알람 시간 : %d시 %d분\n", h, m);




	return 0;
}