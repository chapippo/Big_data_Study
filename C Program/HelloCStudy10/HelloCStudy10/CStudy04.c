#include<stdio.h>
int g = 0; //���� ���� ('global ����'��� �θ�) , main, up3,��� �� �������� �� ����

//���������� �Ű��� �ϰ�
void up1(int l)  //���� l�� up1�� ������ ������		//���� (������) ������          ���� 
{												//���ο� ������ ���� ����
	l++;
}

//���������� ��ġ(������)�� �Ű�
void up2(int* l)									//�ּ���(��ġ) ������             main�� ������ �� �� �ִ�
{												//��ġ�� �˷���� ������ 
	(*l)++;
}

//���������� �����ϰ� ����
void up3()
{
	g++;
}

int main()
{
	int local = 10;
	up1(local); //local�� ���� �ѱ�
	printf("local=%d\n", local); //10
	up2(&local); //local�� �ּҸ� �ѱ�
	printf("local=%d\n", local); //11
	up3(g);
	printf("g=%d\n", g); //1
}