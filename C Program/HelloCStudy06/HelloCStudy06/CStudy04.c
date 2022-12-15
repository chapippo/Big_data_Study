#include<stdio.h>
int main()
{
	//배열
	//학생 100명의 나이를 저장하는 방법은?

	//1. 변수를 100개 만든다.
	//int student1부터 시작해서
	//int student100까지 만든다.
	
	//2. 배열을 이용한다.
	int stu_numbers[100];
	for (int i = 1; i <= 100; i++)
		stu_numbers[i = 1] = i;
	//배열은 가장 첫번째를 [0]으로 본다.
	// 그리고 끝을 길이 =1로 본다.
	//여기선 길이가 100이니까 [99]번째가 끝

	//처음에 배열 만들 때 값을 할당도 가능
	int numbers[5] = { 10,20,30,40,50 };
	printf("%d %d %d %d %d\n",
		numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

	//stu_numbers는 100칸짜리 메모리의 시작점
	//즉 stu_numbers도 포인터
	//엄밀히 말하면 포인터 상수
	//const int a 를 정수 상수라고 하고
	//const double b를 실수 상수라고 하듯이
	//stu_numbers는 배열인데, 배열은 포인터 상수라고 함
	//즉 배열은 한 번 메모리 위치 지정하면 그 변수는 
	//그 위치만 가리킴
	int* ptr = stu_numbers;

	printf("\n%d\n", stu_numbers[50]); //원랜 51
	ptr[50] = 1000;

	printf("\n%d\n", stu_numbers[50]); //근데 1000으로 바뀜

	printf("[2]번째(세번째) 값 변경하기\n");
	scanf_s("%d", ptr + 2);
	printf("\n%d\n", stu_numbers[2]);
	printf("\n%d\n", ptr[2]);

	printf("\n%d %d %d %d\n", ptr[2], *(ptr + 2), stu_numbers[2],
		*(stu_numbers + 2));

	int my_nums[5] = { 50,60,70,80,90 };  //my_nums는 값을 가리키는 게 아니라 위치를 가리키는 것 @@@@@@@@@@@
	ptr = my_nums;
	printf("%d", ptr[2]); //70

	//stu_numbers = my_nums; //포인터 상수라서 안 된다.
	//stu_numbers는 딴 데 가르킬 수 없다.


	return 0;
}