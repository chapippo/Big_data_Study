#include<stdio.h>
int main()
{
	//����
	int age = 30; //int�� ���� ���� ��
	long long bigValue = 9999999999;
	short smallValue = 5;

	//�Ǽ�
	double pi_value = 3.1415;                     //��������� double�� ���� ��
	float myPi = 3.14;
	char MyInitial = "L";

	//age���� nowYear ���� ���� ��� ���� �ٲ�
	//(������ ���� �����ϴ� ����, ���� �Ѿ�� �����÷ο찡 ����) ex. 9999999999 int���� �����÷ο� ��
	int nowYear = 2022;
	printf("���� �¾ ������ %d�Դϴ�.\n",nowYear +1 -age);
	printf("������ ���� %f�Դϴ�.\n", pi_value);

	//������ ���ؼ� ���� �Է� �޾ƺ���.
	//���� �Է��� ������ �������� ���غ���.

	int input;
	printf("���� �Է����ּ���.");
	scanf_s("%d", &input);
	printf("�� ������ ������ %d�Դϴ�.\n", input*input);
	int result = input * input;
	printf("�� : %d\n", result);





	return 0;
}