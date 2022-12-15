#include<stdio.h>
void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", arr[i]);
}

int* Arr1()
{
	int arr[5] = { 1,2,3,4,5 };
	return arr;
}
int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *Arr1()+i);
	}

	printArr(*Arr1(), sizeof(Arr1) / sizeof(int));

	return 0;
}