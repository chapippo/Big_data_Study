#include<stdio.h>
//�ǽ�
//2��
void mul()
{
	for (int a = 2; a <= 9; a++)
	{
		for (int b = 1; b <= 9; b++)
		{
			printf("%d x %d = %d\n", a, b, a * b);
		}
	}
}
//3��
void mull()
{
	int dan1, dan2, gob1, gob2;
	printf("��ܺ��� ��ܱ��� ������");
	scanf_s("%d %d", &dan1, &dan2);
	printf("���ϱ� ����� ���ϱ� �����");
	scanf_s("%d %d", &gob1, &gob2);
	for (int i = dan1; i <= dan2; i++)
	{
		for (int j = gob1; j <= gob2; j++)
			printf("%d x %d = %d\n", i, j, i * j);
	}	
}

int main()
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);			
		}		
	}
	printf("\n");
	
	mul();

	mull();

	return 0;
}