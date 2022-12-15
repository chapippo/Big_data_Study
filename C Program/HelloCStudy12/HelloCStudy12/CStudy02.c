#include<stdio.h>
#include<stdlib.h>
int main()
{
	//int*는 생략해도 됨
	int* dynamic_arr = (int*)malloc(10 * sizeof(int));	//10칸짜리 배열 완성

	int size;
	printf("배열 사이즈 적기 ");
	scanf_s("%d", &size);
	int* dynamic_arr2 = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
		dynamic_arr2[i] = i + 10; //10은 임의로 넣음  //malloc은 초기화가 안 되므로 값을 넣어줬음
	for (int i = 0; i < size; i++)
		printf("%d\n", dynamic_arr2[i]);
	


	printf("\n");
	//동적 메모리를 만드는 방법 2가지
	//malloc -> 메모리 초기화가 안 됨
	//calloc -> 0으로 초기화 해줌

	//10칸짜리 숫자배열을 만들었는데, 안에 값이 0으로 초기화 되어 있다.
	int* mynumbers = (int*)calloc(10, sizeof(int)); 
	for (int i = 0; i < 10; i++)
		printf("%d\n", mynumbers[i]);

	//동적 메모리는 프로그래머가 수동으로 할당한 것이라
	//다 썼다면 free로 없애줘야 함(해지해줘야 함)
	//이거 안 없애면 메모리 누수(memory leak) 문제 생김
	//즉 메모리가 낭비가 됨
	//만약 프로그램
	free(mynumbers);
	free(dynamic_arr);
	free(dynamic_arr2);

	return 0;
}