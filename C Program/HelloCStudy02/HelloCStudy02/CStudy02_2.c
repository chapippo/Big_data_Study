#include<stdio.h>
int main()
{
	//1. scanf_s("%d\n", &age); ��������. \n ���̴� �� �ƴϴ�
	//2. ���� �Է¹ް� �ִ� �� �ִٸ� �װ� ���� 
	// �ٽ� �����ϱ�
	//3. (����) ���α׷� ���ڸ��� �ƹ��͵� �� �ߴ� ��..
	//���� �Է��ؾ� �� ���� �ܰ�� �Ѿ

	//int age;
    //scanf_s("%d", &age);
	//printf("�� ���� : %d\n", age);

	int age;
	scanf_s("%d", &age);
	printf("�� ���̴� %d���Դϴ�.\n", age);

	//3�� �¾ ���� ���
	printf("���� %d����Դϴ�.\n\n", 2022 + 1 - age);

	//4�� ���� ������ r ���� �Է¹ް�, ���� ���̿� ���� �ѷ��� ����ϱ�
	int r;
	printf("������ �Է��غ�?\n");
	scanf_s("%d", &r);
	printf("���� ���� : %f\n", r * r * 3.14);
	double area = 2 * r * 3.14;
	printf("���� �ѷ� : %f\n\n", area);
	

	//5�� 
	//byte�� �Է¹ް� �׿� �ش��ϴ� bit ã��
	printf("�� byte?\n");
	int byte;
	scanf_s("%d", &byte);
	printf("%d byte = %d bit\n\n", byte, byte * 8);

	//6��
	//bit�� �Է¹ް� �׿� �ش��ϴ� byte ã��
	int bit;
	printf("�� bit?\n");
	scanf_s("%d", &bit);
	printf("%d bit = %d byte\n\n", bit, bit / 8);


	//mybyte * 8 = mybit

	int mybyte = byte;
	int mybit = mybyte * 8;

	printf("%d byte * 8 = %d bit\n", mybyte, mybit);

	return 0; //�ڵ� �̵� : alt + ȭ��ǥ ���� �Ʒ���
}