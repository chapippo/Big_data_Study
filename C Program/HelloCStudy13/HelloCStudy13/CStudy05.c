//������
//������ �ּ�(=��ġ)�� �����ϴ� Ÿ��
#include<stdio.h>
void changeValue(int* p, int v)						//�߰�ȣ �ȿ� �ִ� �������� �� ��������
{			//p ��ü�� �ּ� //*p �� �ּҰ� ����Ű�� '��'
	*p = v; //p�� ����Ű�� �ִ� ����   //p�� �ּ��̰� *�� �־��ָ� ���� ���������� ����Ŵ !!!
}			//v�� �ٲٴ� �� !!!

void no_changeValue(int p, int v) //p�� ���� �ٲ������� main�� �ִ� ���� �ٲ��� �ʴ´�
{
			//�� �ȿ� �ִ� ���� �ٲ�����
	p = v;	//main�̳� �� �Լ��� ȣ���� �κ��� ������ �״���̴�
			//�ֳĸ� p�� �� �Լ� �ȿ����� �����ϱ� 
			//����
}

//2�� �Լ�
void changeNumber(int* no1, int* no2)
{
	int temp = *no1;
	*no1 = *no2;
	*no2 = temp;
}

//4��
int inputNum(int* n)
{
	printf("%d", n);
	scanf_s("%d", &n);
	return n;
}

void printNum(int m)
{
	printf("%d", m);
}

//////////////////////////////////////////////////////////

int main()
{
	int ex = 10;

	int* exptr = &ex;
	//int*�� intŸ�� ������ ��ġ�� 
	//����

	changeValue(exptr, 100);
	printf("ex=%d\n", ex);

	changeValue(&ex, 500); //���� ex�� �ּҸ� �ѱ� �� !!!
	printf("ex=%d\n", ex);


	//1��
	no_changeValue(exptr, 654220000);
	printf("ex=%d\n", ex);


	//2��
	int no1 = 3;
	int no2 = 5;
	//printf("%d %d", changeNumber(&no1, &no2)); //changeNumber�� ��ȯ���� �˾ƾ��� ����� �Ǵµ�
											   //(��ȯ���� ����)�𸣴� ����� �� �� �� �ۿ�
	changeNumber(&no1, &no2);
	printf("%d %d\n", no1, no2);


	//3��
	int num1, num2;
	printf("�� ���� ���ڸ� �Է�. ");
	scanf_s("%d %d", &num1, &num2);
	changeNumber(&num1, &num2);
	printf("%d %d\n", num1, num2);

	
	//4��
	printf("4��) �� ���� ���ڸ� �Է�. ");
	int a = inputNum();
	int b = inputNum();
	printNum(a);
	printNum(b);
	changeNumber(a, b);
	printNum(a);
	printNum(b);

	//�̰� ��� ���̳ĸ�
	//�Լ��� �Ű������� �ַ� ����
	//scanf�� swap �Լ� ��...���� �ַ� ����
	return 0;
}