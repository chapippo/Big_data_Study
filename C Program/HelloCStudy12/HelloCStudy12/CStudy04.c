#include<stdio.h>
#define MAX 1024 //��ũ�� ���
				 //���ú��� �� ���� ó���Ǳ� ������
				 //�̰� �̿��ؼ� �迭�� ũ�� ��� �� �ȴ�!!! 
int main()
{
	//1��
	//�迭 �ȿ� ���ڸ� �ְ� 
	//�ű⼭ ���� ū ��
	//�׸��� �� ū ���� �ε���
	//���

	//���� ū �� Ȥ�� ���� �� ã�� �� ���� �ߴ�

	int numbers[5]; //�ϴ� �迭�� ũ�⸦ ���Ƿ� �ش�, 5ĭ �Ҵ�
	int mynumbers[MAX]; //���� (��ũ�� ���)
	//int num = 5;
	//int numbers2[num]; //������ �迭 ũ�� ���� �Ұ����ϱ� ������ malloc, calloc�� ���
	//������(num=5) �迭��(numbers) ����(���� ����) ������ ������ �迭 ũ�� ���� �Ұ���
	//���� �ȿ��� ���� ���� �ö��� �𸣱� ����
	
	//������ �̿��ؼ� �ְ� ������ �� ������ ��� �Ѵ�                                @@@@@@@ �� ���� check ��

	int size = sizeof(numbers) / sizeof(int); //���� [5]�� �Ҵ��صּ� ��� �� �ᵵ ��

	for (int i = 0; i < size; i++)
	{
		printf("%d��° ���� �Է� ", i);
		scanf_s("%d", &numbers[i]);
	}
	
	//���� ù��° ���ڸ� ���� ũ�ٰ� ������
	int max = numbers[0];
	int max_index = 0;
	for (int i = 1; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
			max_index = i; //����
		}
	}
	printf("�ִ밪�� [%d]��°�� �ִ�.\n", max_index);
	
	return 0;
}