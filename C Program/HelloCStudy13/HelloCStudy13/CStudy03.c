#include<stdio.h>	//�ߺ� üũ �Լ� �ִ� ����
//arr�� n ���� �ִ��� ���� üũ			//�ߺ� check �Լ� ����� ��
//size��ŭ �� �� �ʿ䰡 ����.
//2��°�� ���� �ִ´ٸ� 2��°�� ���� �ֱ� ����
//0��°�� 1��°�� ���̶� n�� ���ϸ� �ȴ�.

int checkDuplicate(int arr[],int size, int n)
{
	for (int i = 0; i < size; i++)
	{					//size�� �迭 ��ü���̰� XXX 
		if (n == arr[i])
			return 1;	//1 ��� �ٸ� ���� �ȴ�.
	}
	return 0;	//�ߺ��� ���ٴ� ��
}

int main()
{											//ó������ ���� �ƹ��ų� �ִ´�
	int numbers[5];							//�ߺ��� �߰ߵǸ� �ڷ� ����
	for (int i = 0; i < 5; i++)
	{
		int n;						//n
		printf("���ڸ� �Է��Ͻÿ�. ");
		scanf_s("%d", &n);
		if (checkDuplicate(numbers, i, n) == 0)
			numbers[i] = n;			//0�� ��쿡�� n�� �ִ´�
		else
			i--;	//�ٽ� ������ ���� ���� �ٽ� �־�� ��
	}
	return 0;
}