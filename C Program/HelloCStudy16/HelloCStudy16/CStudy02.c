//�ǽ�2
#include<stdio.h>
void printArr(int arr[], int size)
{
	printf("\n");
	for (int i = 0; i < size; i++)
		printf("%d\n", arr[i]);
	printf("\n");
}
//2��
double average(int ages[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += ages[i];
	//�Ǽ��� ���ؾ� �ϴ� �� �� �ϳ� Ȥ�� �� ��
	//�Ǽ��� ����ȯ����� ��
	return sum / (double)size;
}				//double ���� �׳� size;�� �����ָ� �Ҽ��� �߸�

//4��
int* myages()
{
	static int ages[3]; //static �� ���� ages��ü�� ����� //static�� ��⿡ ���α׷��� ������ �����
	for (int i = 0; i < 3; i++)
	{
		printf("�л��� ���� �Է� ");
		scanf_s("%d", &ages[i]);
	}
	return ages;
}
int main()
{
	//���� �л����� ���̸� �Է¹޴� �迭�� �����.
	int ages[3];
	for (int i = 0; i < 3; i++)
	{
		printf("�л��� ���� �Է� ");
		scanf_s("%d", &ages[i]);	//�迭�� ���ֱ� -> (10��) �� ���
	}
	//3�� (2������ ���� ���� main���� print)
	printf("��� ���� : %.2f\n", average(ages, 3));	//���̴� int�� �Է� ������ (10��) return�� double��

	//4�� ���ϰ� �޾ƿ��� / �۷ι� ������ ������ �����͸� ������ �غ���@@@@@
	int* values = myages();
	for (int i = 0; i < 3; i++)
		printf("%d\n", values[i]);

	//5�� �׳����
	printArr(values, 3);

	return 0;
}