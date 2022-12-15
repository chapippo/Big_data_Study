//실습2
#include<stdio.h>
void printArr(int arr[], int size)
{
	printf("\n");
	for (int i = 0; i < size; i++)
		printf("%d\n", arr[i]);
	printf("\n");
}
//2번
double average(int ages[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += ages[i];
	//실수를 구해야 하니 둘 중 하나 혹은 둘 다
	//실수로 형변환해줘야 함
	return sum / (double)size;
}				//double 없이 그냥 size;로 나눠주면 소수점 잘림

//4번
int* myages()
{
	static int ages[3]; //static 안 쓰면 ages자체가 사라짐 //static을 썼기에 프로그램이 끝나면 사라짐
	for (int i = 0; i < 3; i++)
	{
		printf("학생의 나이 입력 ");
		scanf_s("%d", &ages[i]);
	}
	return ages;
}
int main()
{
	//교실 학생들의 나이를 입력받는 배열을 만든다.
	int ages[3];
	for (int i = 0; i < 3; i++)
	{
		printf("학생의 나이 입력 ");
		scanf_s("%d", &ages[i]);	//배열에 값넣기 -> (10줄) 후 출력
	}
	//3번 (2번에서 만든 것을 main에서 print)
	printf("평균 나이 : %.2f\n", average(ages, 3));	//나이는 int로 입력 받지만 (10줄) return은 double로

	//4번 리턴값 받아오기 / 글로벌 변수를 쓰던지 포인터를 쓰던지 해보기@@@@@
	int* values = myages();
	for (int i = 0; i < 3; i++)
		printf("%d\n", values[i]);

	//5번 그냥출력
	printArr(values, 3);

	return 0;
}