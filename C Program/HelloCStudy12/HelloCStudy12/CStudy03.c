#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	printf("�迭�� ũ�⸦ �Է��Ͻÿ�. ");
	scanf_s("%d", &size);
	
	int* insert_Arr = (int*)malloc(size * sizeof(int));
	
	//1,2��
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

	//3��
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
	printf("���� ū ���� : %d, �ε��� : %d", max, idx);

	//4��



	return 0;
}