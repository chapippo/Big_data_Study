//1. int age 라는 변수를 선언 후 이 변수에 나의 나이를 입력한다.
//2. 내 나이는 age살입니다. 출력
//3. age 변수를 이용해서 내가 태어난 연도를 확인해보기 (한국식 나이를 기준으로 한다.)
//4. 원의 반지름 r 값을 입력받고, 원의 넓이와 원의 둘레값 출력하기
// 원의 넓이 : r*r*3.14
// 원의 둘레 : 2*r*3.14
//5. byte를 입력받고 그에 해당하는 bit값 출력하기
//입력 : 1 입력 : 5
//출력 : 8 출력 : 40
//6. bit 값을 입력받고 그에 해당하는 byte값 출력하기
//입력 : 8 입력 : 40
//출력 : 1 출력 : 5 
//7. 5,6번에서 입력받은 걸 가지고 출력하기
//mybyte * 8 = mybit 값입니다.  7번 문제 이상해


#include<stdio.h>
int main()
{
	int age = 30;
	printf("내 나이는 %d살입니다.\n", age);
	int nowYear = 2022;
	printf("내가 태어난 연도는 %d입니다.\n\n", nowYear + 1 - age);

	int input;
	printf("원의 반지름 값을 입력하세요.");
	scanf_s("%d", &input);
	printf("원의 넓이는 %f입니다.\n", input * input * 3.14);
	printf("원의 둘레는 %f입니다.\n\n", 2 * input * 3.14);


	
	printf("byte값을 입력하세요.\n");
	scanf_s("%d", &input);
	printf("bit값은 %d입니다.\n\n", input * 8);
	int mybyte = input;
	
	
	printf("bit값을 입력하세요.\n");
	scanf_s("%d", &input);
	printf("byte값은 %d입니다.\n\n", input / 8);
	int mybit = input;

	printf("mybyte값은 %d입니다.\n", mybit * 8);


	return 0;
}