#include<stdio.h>
#include<stdlib.h>	//srand, rand�� ����ϱ� ���� �������
#include<time.h>	//time�� ����ϱ� ���� �������
void main()
{
	int lotto[7];		//��÷�� ���ڸ� ������ �迭
	srand(time(NULL));	//���� �ʱ�ȭ
	//int random = 0;		//������ ���� ����
	for (int i = 0; i < 7; i++)
	{
		lotto[i] = rand() % 45 + 1;	//1~45 ������ ���ڸ� �̾Ƽ� random ������ ����
		for (int j = 0; j < i; j++)	//�ζǿ��� �ߺ��� �����Ƿ� �ߺ� ���Ÿ� ���� for��
		{
			if (lotto[i] == lotto[j])
			{
				i--;	//�ߺ��� �߰ߵ� ��� i��° ���ڸ� �ٽ� �̴´�.
				break;
			}
		}
		//printf("%d\n", random);	//���
	}
	for (int k = 0; k < 7; k++)	//��¿�
	{
		printf("%d ", lotto[k]);
	}
	printf("\n");
}