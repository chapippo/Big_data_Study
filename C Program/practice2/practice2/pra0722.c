#include<stdio.h>

//실습 1

void printArr(int number[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", number[i]);
}

int findMax(int number[], int size)
{
	int max = number[0];
	int min = number[0];
	for (int i = 1; i < size; i++)
	{
		if (max < number[i])
			max = number[i];
		if (min > number[i])
			min = number[i];
	}
	printf("최소값 : %d\n", min);
	return max;
}

void reverseArr(int number[], int size)
{
	for (int i = 0; i < size; i++)
		number[i] *= -1;
}

int main()
{
	int numbers1[3] = { 1,2,3 };

	printArr(numbers1, sizeof(numbers1) / sizeof(int));

	int max = findMax(numbers1, sizeof(numbers1) / sizeof(int));
	printf("최대값 : %d\n", max);

	reverseArr(numbers1, 3);
	printArr(numbers1, 3);


	return 0;
}