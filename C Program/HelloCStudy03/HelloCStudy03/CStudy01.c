#include<stdio.h>
#include<stdlib.h>//atoi를 쓰기 위함. 후반부에 필요함
int main()
{

	if (0)
	{

		int x, b;
		printf("x와 b는? ");
		scanf_s("%d %d", &x, &b);

		int a;
		printf("a는 ?");
		scanf_s("%d", &a);

		printf("(%d+%d)(%d+%d)=%d", x, a, x, b, (x + a) * (x + b));


		//4번문제
		//변수 a를 새로 선언해서 다음 식의 해를 구하라
		//(x + a)(x + b) = > x ^ 2 + (a + b)x + (a * b)

		int x, b;
		printf("x와 b는?\n");
		                                  //2개 이상의 값 입력하기
		scanf_s("%d %d", &x, &b);
		                                 //한 줄에 2개의 변수 값 입력됨

		int a;
		printf("a는?");
		scanf_s("%d", &a);

		                      //(x+a)(x+b) = x^2 + (a+b)x + (a*b)
		printf("(%d+%d)(%d+%d)=%d\n", x, a, x, b, (x + a) * (x + b));
		printf("x^2+(a+b)x+(a*b)=%d\n", (x * x) + ((a + b) * x) + (a * b));



		//5번문제
		/*1) 첫번째 숫자 곱하기 두번째 숫자의 1의 자리 수(472*5)
		  2) 첫번째 숫자 곱하기 두번째 숫자의 10의 자리 수(472 * 8)
		  3) 첫번째 숫자 곱하기 두번째 숫자의 100의 자리 수(472 * 3)
		  4) 첫번째 숫자 곱하기 두번째 숫자(472 * 385)*/
		printf("첫번째와 두번째 숫자를 입력하세요.");
		int num1, num2;
		//num1 = 10;
		scanf_s("%d,%d", &num1, &num2);
		//scanf_s에서 띄어쓰기를 이용해서 여러 개 입력 가능하지만, 콤마(,)를 이용해도 된다.

		printf("%d\n", num1 * (num2 % 10)); //472*5
		printf("%d\n", num1 * ((num2 / 10) % 10)); //472*8 (소수점 버림)
		printf("%d\n", num1 * (num2 / 100)); // 472*3
		printf("%d\n", num1 * num2);


		//두번째 방법
		//아스키코드 이용하는 방법

		printf("두번째 숫자만 다시 입력해봐요.");
		char number[5]; //문자 배열, 문자를 내가 5개를 넣겠다
		rewind(stdin);  //54줄 위로 문자를 받았어서 rewind(stdin)
		gets(number);


		printf("%d\c", number[0]);  //숫자로 출력 (아스키코드상 숫자를 출력하고 싶다)
		printf("%c\c", number[0]);  //문자로 출력 (글자 그대로 출력하고 싶다)


		printf("%d,%d,%d,%d\n",
			num1 * (number[2] - '0'),
			num1 * (number[1] - '0'),  //0 왜 빼요?? '8'=56이라 -48을 해줘야 숫자 8이 되니까
			num1 * (number[0] - '0'),
			num1 * atoi(number));
		//atio -> 문자열을 숫자로 바꿔주는 기능


	}
		
	
		//4번문제
		//변수 a를 새로 선언해서 다음 식의 해를 구하라
		//(x + a)(x + b) = > x ^ 2 + (a + b)x + (a * b)


	int x, b;
	printf("x와 b는?\n");
	//2개 이상의 값 입력하기
	scanf_s("%d %d", &x, &b);
	//한 줄에 2개의 변수 값 입력됨

	int a;
	printf("a는?");
	scanf_s("%d", &a);

	//(x+a)(x+b) = x^2 + (a+b)x + (a*b)
	printf("(%d+%d)(%d+%d)=%d\n", x, a, x, b, (x + a) * (x + b));
	printf("x^2+(a+b)x+(a*b)=%d\n", (x * x) + ((a + b) * x) + (a * b));




	return 0;
}