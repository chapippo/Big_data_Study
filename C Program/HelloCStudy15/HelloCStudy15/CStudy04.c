#include<stdio.h>
//�ǽ� 4�� ����o �Ű�����x
int calcAge()
{
	int year;
	printf("�� �⵵�� �¾���� ");
	scanf_s("%d", &year);
	return 2023 - year;
}

int main()
{
	int age = calcAge();
	printf("�� ���̴� %d���Դϴ�.\n", age);
	return 0;
}