#include<stdio.h>
//1��	//��ȯ

//int�� ������ �ݵ�� return�� ����� �ϰ�
//void��� return; ���ų� ��������
//int, double, char ���̶��
//�ݵ�� return�� ����� ��
//int �տ� �������� �ݵ�� return ����; ����� �� @@@@@
int mulsum()
{
	int sum = 0;
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			sum += (i * j);
		}
	}
	return sum;
}

int main()
{
	printf("������ ���� �� = %d\n", mulsum());

	return 0;
}