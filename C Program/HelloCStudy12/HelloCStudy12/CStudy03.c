#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	printf("배열의 크기를 입력하시오. ");
	scanf_s("%d", &size);
	
	int* insert_Arr = (int*)malloc(size * sizeof(int));
	
	//1,2번
	for (int i = 0; i < size; i++)
	{
		int a;
		scanf_s("%d", &a);
		insert_Arr[i] = a;
		//if (max < insert_Arr[i])
			//max = insert_Arr[i];
	}
	for (int i = 0; i < size; i++) 
	{
		printf("%d\n", insert_Arr[i]);
	}

	//3번
	int max = insert_Arr[0];
	int idx = 0;
	for (int i = 1; i < size; i++)
	{
		if (max < insert_Arr[i])
		{
			max = insert_Arr[i];
			idx = i;
		}
	}
	printf("가장 큰 숫자 : %d, 인덱스 : %d", max, idx);

	//4번



	return 0;
}