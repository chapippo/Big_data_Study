#include<stdio.h>
// �Լ� : �ڵ并ġ
// �̸� ����� �� �ڵ� ���
// ���� �ȿ��ٰ� �� ��� �Ǵ� �����������
// ���� ������ �ִ��� �����ϰ� �ϱ� ���ؼ� 
// �Լ���� ���� �������.

//�Լ� 4���� ����
//��ȯ��(return)�� �Ű�����(parameter, argument)
//  X                 X
//  O                 X
//  X                 O
//  O                 O

//�Լ��� ���Ǹ� �����Ѵ�.
//Ȥ�� �Լ� ����
void enterKey() //�� �� ��� �͸� �Ѵ�
{
	printf("\n");
}
void printPowerNumber(int n) //�Ű������� ���� ���ڸ� �����ؼ� ���
{
	printf("%d", n * n);
}
int inputNum() //���ڸ� �Է¹���
{
	int n;
	printf("���� �Է��ϼ���\n");
	scanf_s("%d", &n);
	return n;
}

//�Ű������� ��ȯ�� �� �� �ִ� ��
int PowerNum(int n, int p) //n: ����, p: ���� ��
{
	if (p <= 0) // ���� ������ ���� �� ����� ��
		return 1;
	else if (p == 1)
		return n;
	else
	{
		for (int i = 0; i < p-1; i++) //p-1 ������� 
			n *= n;
	}
	return n;
}

int main()
{
	int num = inputNum(); //���ڸ� ���� �Է� �޾ƾ߰���
	printPowerNumber(num);
	enterKey(); //�� �� ����
	printPowerNumber(inputNum());
	enterKey();
	printf("���� 2���� ���ؼ� �Է¹ް� ����غ�\n");
	return 0;	
}