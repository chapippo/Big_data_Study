#include<stdio.h>
//배열을 함수의 매개변수로 넘길 땐										배열 = 포인터
//배열의 크기도 같이 넘겨줘야 함
//그리고 매개변수는 int numbers[]라고 해도 되고
//int* numbers 라고 해도 됨
//왜냐면 배열은 포인터이니까

// 실습1 - 1번							//포인터는 시작하는 위치만!!! 지정하고 어디까지인지는 정보가 없기
										//때문에 size 넘겨줌  (밑에 4줄이랑 같음)
void printArr(int numbers[], int size)	//numbers[]는 배열이라는 건 알겠는데 몇 칸인지는 정보가 없다, 
{										//어디까지 뻗어갈 지 모른다
										//시작위치만 알고 어디까지가 읽어야 할 부분인지 몰라,,, 
										//그래서 배열을 매개변수로 사용할 때는 size를 넘겨줘야 한다

	//printf("%d", numbers);			//numbers 자체는 위치일 뿐 @@@@@@@, = 주소지 출력

	for (int i = 0; i < size ; i++) 
		printf("%d\n", numbers[i]); //배열의 위치가 0부터 시작??????@@@@@@@@@

	//for (int i = 0; i < size ; i++) 
		//printf("%d\n", *(numbers+i));  //포인터라는 점에 착안해서 이렇게 써도 나오는 값은 같음
}						//포인터가 가리키는 위치의 값이니깐


// 실습1 - 2번
//int* numbers 대신					int numbers[] 이거 써도 됨
int findMax(/*int arr[], int count*/int* numbers, int size)
{
	int max = /*arr[0]*/numbers[0];
	int min = /*arr[0]*/numbers[0];
	for (int i = 1; i < /*count*/size; i++)
	{						    //size말고 sizeof(numbers) 하면 8????????@@@@@@@@@
		/*
		if (arr[i] > i)
			arr[i] = max;
		else if (arr[i] < i)
			arr[i] = min;
		*/
		if (max < numbers[i])
			max = numbers[i];
		if (min > numbers[i])
			min = numbers[i];
	}
	printf("최소값 : %d\n", min);
	return max;
}


// 실습1 - 3번

//void reverse_arr(int* numbers, int size)
void reverse_arr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		numbers[i] *= -1; //부호를 반대로 바꾼 것 @@@@@@@@
}




int main()
{
	//배열
	//1개의 변수가 여러 개의 값을 관리함
		
	int numbers1[3] = { 1,2,3 };

	int numbers2[3] = { 1,2,3 };	//한칸 한칸이 4byte임(int이기 때문)
	//numbers2[0] = 100;
	//numbers2[1] = 200;
	//numbers2[2] = -300;
						//20				4
	
						//main
	/*
	for (int i = 0; i < sizeof(numbers1) / sizeof(int); i++) 
		printf("%d\n", numbers1[i]);
	printf("\n");
	*/

	//1번
	printArr(numbers1, sizeof(numbers1) / sizeof(int));
	printf("\n");

	printArr(numbers1, 3);  //numbers1 자체는 1개의 값만 저장
	printf("\n");			//3칸 짜리 메모리(=배열)의 시작점만 저장


	//2번
	//bigArr(numbers1, sizeof(numbers1) / sizeof(int));
	//int result = bigArr(numbers1, sizeof(numbers1) / sizeof(int));
	//printf("%d", result);
	int max = findMax(numbers2, sizeof(numbers2) / sizeof(int));
	printf("numbers2의 최댓값 : %d\n", max);


	//3번
	printf("\n");
	printArr(numbers2, 3);
	printf("\n");
	reverse_arr(numbers2, 3);
	printArr(numbers2, 3);
										//@@@@@@@@@@ numbers2로 해서 체크해보기

	return 0;
}