#include<stdio.h>
//�ǽ�1

//�迭�� �������̱� ������ �Լ��� �Ű������� ���̰� �Ǹ�
//�Լ����� ���� ��ȭ�� ���� �� �迭������ ���� ��ȭ�� �ִ�.
//void increaseNum(int numbers[])
// ����� ���� �ֵ��� �ƴϸ� ������ ���� �� �ִ� ��							@@@@@@@ ???
// �̿��ؼ� �ϴ���.. �׳� ������ ���� �Ѱ��ָ� ��									@@@@@@@ ???
//					6�� = 10��
void increaseNum(int* numbers, int size, int n)
{
	for (int i = 0; i < size; i++)
		numbers[i] += n;
}

//2��
//�迭 �� ��� ����ϱ�
void printArr(int arr[], int size)
{
	printf("\n");
	for (int i = 0; i < size; i++)
		printf("%d\n", arr[i]);
	printf("\n");
}

//3��
void decreaseNum(int numbers[], int size, int n)
{
	for (int i = 0; i < size; i++)
		numbers[i] -= n;
}

//4��
void decreaseNum_q4(int numbers[], int size, int n)             //�Լ����� int ��� return num; ���� -1,0,1 ���� ���ڰ� �پ�� �Ѵ�
{																//void�� return;
	//�Ű������� ������ ���͵� �� �ǰ�
	//���� ���ҽ����� �� ������ �Ǹ� ��� ����
	if (n < 0)
		return; //�̷��� �� ���� if else�� ��� �ص� �ȴ�.//  return;�� ���� �Լ��� �����ٴ� �� �����ְ� �;���
	for (int i = 0; i < size; i++)
	{
		int num = numbers[i];
		num -= n;
		if (num < 0)
			return;

		numbers[i] -= n;
	}
}

int main()
{
	//�ϳ��� ������ ���ؼ� ���� ���� ���ڸ� ������ �� �ִ� �� �迭
	//ó���� �������ڸ��� �� �ֱ�
	int ages[5] = { 23,25,30,29,50 };
	int ages2[3] = { 10,20,30 };
										//@@@ �����迭 check
	//�����ϰ��� �� �ֱ�
	int ages3[3];
	ages3[0] = 20;
	ages3[1] = 30;
	ages3[2] = 40;

	
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", ages[i]);
		ages[i] = i * i + ages[i]; //�ƹ� ���̳� �־
	}
	
	printf("------- 1�� -------\n");
	for (int i = 0; i < 3; i++)
		printf("%d\n", ages2[i]);

	increaseNum(ages2, 3, 100);
	printf("------- ��ȭ�� -------\n");
	for (int i = 0; i < 3; i++)
		printf("%d\n", ages2[i]);

	printf("------- 2�� -------\n");
	printArr(ages, sizeof(ages) / sizeof(int));

	printf("------- 3�� -------\n");
	decreaseNum(ages, sizeof(ages) / sizeof(int), 500); //500��ŭ �� ��
	printArr(ages, sizeof(ages) / sizeof(int));

	ages3[0] = 150;
	ages3[1] = 50;
	ages3[2] = 500;
	printf("------- 4�� -------\n");
	decreaseNum_q4(ages3, 3, 100);
	printArr(ages3, 3);


	return 0;
}