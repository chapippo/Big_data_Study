#include<stdio.h>
int main()
{
	//�ݺ���
	//for , while , do while�� �ִµ�
	//���� ��ǥ���� �� for

	//������ 10�� ���
	for (int i = 0; i < 10; i++)           //�ݺ����� ��� ������ �ٽ�
	{
		printf("������\n");
	}

	int count = 0;
	//count ���� 10�� ����
	while (count < 10)
	{
		printf("count=%d\n", count);
		count++;
	}


	// while �ȿ� �ִ� ������ �����̴��� 
	// ������ �� ���� ������
	// ����� ���� count�� 10�̶� �� ��ȣ������
	// ����
	do
	{
		printf("count=%d", count);
	} while (count < 10);



	return 0;
}