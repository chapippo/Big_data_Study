#include<stdio.h>
#define MAX 1024 //매크로 상수
				 //스택보다 더 먼저 처리되기 때문에
				 //이걸 이용해서 배열의 크기 잡는 건 된다!!! 
int main()
{
	//1번
	//배열 안에 숫자를 넣고 
	//거기서 가장 큰 값
	//그리고 그 큰 값의 인덱스
	//출력

	//가장 큰 값 혹은 작은 값 찾는 건 많이 했다

	int numbers[5]; //일단 배열의 크기를 임의로 준다, 5칸 할당
	int mynumbers[MAX]; //참고 (매크로 상수)
	//int num = 5;
	//int numbers2[num]; //변수로 배열 크기 지정 불가능하기 때문에 malloc, calloc을 썼다
	//변수도(num=5) 배열도(numbers) 같은(스택 영역) 영역에 있으면 배열 크기 지정 불가능
	//스택 안에서 뭐가 먼저 올라갈지 모르기 때문
	
	//변수를 이용해서 주고 싶으면 힙 영역을 써야 한다                                @@@@@@@ 힙 영역 check 必

	int size = sizeof(numbers) / sizeof(int); //위에 [5]로 할당해둬서 사실 안 써도 됨

	for (int i = 0; i < size; i++)
	{
		printf("%d번째 숫자 입력 ", i);
		scanf_s("%d", &numbers[i]);
	}
	
	//가장 첫번째 숫자를 가장 크다고 가정함
	int max = numbers[0];
	int max_index = 0;
	for (int i = 1; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
			max_index = i; //정답
		}
	}
	printf("최대값은 [%d]번째에 있다.\n", max_index);
	
	return 0;
}