#include<stdio.h>
//�迭�� �Լ��� �Ű������� �ѱ� ��										�迭 = ������
//�迭�� ũ�⵵ ���� �Ѱ���� ��
//�׸��� �Ű������� int numbers[]��� �ص� �ǰ�
//int* numbers ��� �ص� ��
//�ֳĸ� �迭�� �������̴ϱ�

// �ǽ�1 - 1��							//�����ʹ� �����ϴ� ��ġ��!!! �����ϰ� ������������ ������ ����
										//������ size �Ѱ���  (�ؿ� 4���̶� ����)
void printArr(int numbers[], int size)	//numbers[]�� �迭�̶�� �� �˰ڴµ� �� ĭ������ ������ ����, 
{										//������ ��� �� �𸥴�
										//������ġ�� �˰� �������� �о�� �� �κ����� ����,,, 
										//�׷��� �迭�� �Ű������� ����� ���� size�� �Ѱ���� �Ѵ�

	//printf("%d", numbers);			//numbers ��ü�� ��ġ�� �� @@@@@@@, = �ּ��� ���

	for (int i = 0; i < size ; i++) 
		printf("%d\n", numbers[i]); //�迭�� ��ġ�� 0���� ����??????@@@@@@@@@

	//for (int i = 0; i < size ; i++) 
		//printf("%d\n", *(numbers+i));  //�����Ͷ�� ���� �����ؼ� �̷��� �ᵵ ������ ���� ����
}						//�����Ͱ� ����Ű�� ��ġ�� ���̴ϱ�


// �ǽ�1 - 2��
//int* numbers ���					int numbers[] �̰� �ᵵ ��
int findMax(/*int arr[], int count*/int* numbers, int size)
{
	int max = /*arr[0]*/numbers[0];
	int min = /*arr[0]*/numbers[0];
	for (int i = 1; i < /*count*/size; i++)
	{						    //size���� sizeof(numbers) �ϸ� 8????????@@@@@@@@@
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
	printf("�ּҰ� : %d\n", min);
	return max;
}


// �ǽ�1 - 3��

//void reverse_arr(int* numbers, int size)
void reverse_arr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		numbers[i] *= -1; //��ȣ�� �ݴ�� �ٲ� �� @@@@@@@@
}




int main()
{
	//�迭
	//1���� ������ ���� ���� ���� ������
		
	int numbers1[3] = { 1,2,3 };

	int numbers2[3] = { 1,2,3 };	//��ĭ ��ĭ�� 4byte��(int�̱� ����)
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

	//1��
	printArr(numbers1, sizeof(numbers1) / sizeof(int));
	printf("\n");

	printArr(numbers1, 3);  //numbers1 ��ü�� 1���� ���� ����
	printf("\n");			//3ĭ ¥�� �޸�(=�迭)�� �������� ����


	//2��
	//bigArr(numbers1, sizeof(numbers1) / sizeof(int));
	//int result = bigArr(numbers1, sizeof(numbers1) / sizeof(int));
	//printf("%d", result);
	int max = findMax(numbers2, sizeof(numbers2) / sizeof(int));
	printf("numbers2�� �ִ� : %d\n", max);


	//3��
	printf("\n");
	printArr(numbers2, 3);
	printf("\n");
	reverse_arr(numbers2, 3);
	printArr(numbers2, 3);
										//@@@@@@@@@@ numbers2�� �ؼ� üũ�غ���

	return 0;
}