//1. int age ��� ������ ���� �� �� ������ ���� ���̸� �Է��Ѵ�.
//2. �� ���̴� age���Դϴ�. ���
//3. age ������ �̿��ؼ� ���� �¾ ������ Ȯ���غ��� (�ѱ��� ���̸� �������� �Ѵ�.)
//4. ���� ������ r ���� �Է¹ް�, ���� ���̿� ���� �ѷ��� ����ϱ�
// ���� ���� : r*r*3.14
// ���� �ѷ� : 2*r*3.14
//5. byte�� �Է¹ް� �׿� �ش��ϴ� bit�� ����ϱ�
//�Է� : 1 �Է� : 5
//��� : 8 ��� : 40
//6. bit ���� �Է¹ް� �׿� �ش��ϴ� byte�� ����ϱ�
//�Է� : 8 �Է� : 40
//��� : 1 ��� : 5 
//7. 5,6������ �Է¹��� �� ������ ����ϱ�
//mybyte * 8 = mybit ���Դϴ�.  7�� ���� �̻���


#include<stdio.h>
int main()
{
	int age = 30;
	printf("�� ���̴� %d���Դϴ�.\n", age);
	int nowYear = 2022;
	printf("���� �¾ ������ %d�Դϴ�.\n\n", nowYear + 1 - age);

	int input;
	printf("���� ������ ���� �Է��ϼ���.");
	scanf_s("%d", &input);
	printf("���� ���̴� %f�Դϴ�.\n", input * input * 3.14);
	printf("���� �ѷ��� %f�Դϴ�.\n\n", 2 * input * 3.14);


	
	printf("byte���� �Է��ϼ���.\n");
	scanf_s("%d", &input);
	printf("bit���� %d�Դϴ�.\n\n", input * 8);
	int mybyte = input;
	
	
	printf("bit���� �Է��ϼ���.\n");
	scanf_s("%d", &input);
	printf("byte���� %d�Դϴ�.\n\n", input / 8);
	int mybit = input;

	printf("mybyte���� %d�Դϴ�.\n", mybit * 8);


	return 0;
}