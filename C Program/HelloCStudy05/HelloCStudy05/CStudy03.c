#include<stdio.h>
int main()
{
	if (0)
	{
		//반복문에 대해서 좀 더 해보기

		//1. for문으로 무한루프 만들기
		//for (;;)
		//for(int i = 0; i<1;)            //i가 증가 안 하니까 무한대



		system("color a");

		for (int i = 0;; i++)
		{
			//printf_s("a");
			printf("%d\n", i);
			break;
		}



		//2. while문도 중첩이 되므로 while문으로 구구단 짤 수 있다.


		//3. 반복문 이용해서 문자열 안에 있는
		//   내용들 하나하나 까볼 수도 있다.
		char name[100];
		printf("이름이 뭔가?");
		gets(name);
		for (int i = 0; name[i] != '\0'; i++)          // '\0' = NULL
			printf("%c", name[i]);

	}
	if (0)
	{
		//1번
		//변수 a와 b와 c의 값을 입력받고, a부터 b까지의 합을 구하되, c의 배수 부분은 제외하고 합을 구할 것
		int a, b, c;
		printf("a와 b, c의 값을 입력하세요. ");
		scanf_s("%d %d %d", &a, &b, &c);
		//int c;
		//printf("c의 값은? ");
		//scanf_s("%d", &c);
		int sum = 0;
		for (int i = a; i <= b; i++)       //a부터 시작해서 b 이하까지
		{
			if (i % c == 0)
				continue;
			sum += i;                       //나머지에 대해서는 더한다
		}
		//printf("%d부터 %d까지의 합 중 %d의 배수 부분을 제외한 합은 %d이다.\n", a, b, c, sum);
		printf("sum = %d\n", sum);
	}


	//2번
	//설탕 덩어리를 3kg/5kg로 담는데, 되도록이면 주머니 숫자를 줄여서 담아오고 싶다.
	//근데 4kg 같은 건 3kg와 5kg로 담는 게 불가능하니 -1 출력

	//5kg로 나눠지는지 먼저 체크
	//그걸로 나눠지면 그 주머니 개수대로 출력하고 끝
	/*
	printf("사탕 공장이 요구하는 설탕 수는? ");
	int n;
	scanf_s("%d", &n);
	for (int sugar = 0; n > )
	*/


	int Sugar;
	printf("설탕 몇 kg?");
	scanf_s("%d", &Sugar);
	int pack = 0;  // 주머니 수
	while (1)
	{
		if (Sugar % 5 == 0)
		{
			pack += Sugar / 5;
			printf("%d묶음\n", pack);
			break;
		}
		Sugar -= 3;
		pack++;  //3kg 주머니 하나 증가
		if(Sugar <0)
		{
			printf("-1\n");
			break;
		}
	}



	return 0;
}