#include<stdio.h>
//�� a,b�� main�� a,b�� �ƹ� �������.
//�� a,b�� �� �ٲ� main�� a,b�� �״��
void printBig(int a, int b)
{
	if (a >= b)
	{
		printf("%d\n", a);
		return;		//�߰��� ���������� ���� ��, ���� Ÿ���� void�� �� ���������ϰ� ���� �� return; ���� �ȴ�
	}
	printf("%d\n", b);
}

int findBigReturn(int a, int b)
{
	if (a >= b)
		return a;
	//else //b�� a���� Ŭ ���... else �� ��� ��, else �־ �ǰ� �� �־ �ǰ�
	return b;
}


int main()
{
	//main���� �غ���
	//1�� : �� �� �� ū �� ���
	int a, b;
	printf("���� �� �� �Է�(3 5 �̷���)\n");
	scanf_s("%d %d", &a, &b);

	//���� ������
	//a�� b���� ũ�ų� ������ a ���
	//�װ� �ƴϸ� b ���
	a >= b ? printf("%d\n", a) : printf("%d\n", b);
	
	//���� ������ ���� �ϱ�
	if (a >= b)
		printf("%d\n", a);
	else
		printf("%d\n", b);


	printBig(a, b);		//main �ȿ� ������ �̷��Ը� ���� �ȴ�
	
	int result = findBigReturn(a, b);
	printf("%d\n", result);
	return 0;
}