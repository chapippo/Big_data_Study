#include<stdio.h>
//�ǽ� 5�� �¾ ������ �Ű������� �ް� ���� ����
int calcAge(int y)
{
	return 2023 - y;
}

int main()
{
	int year;
	printf("�� ���?");
	scanf_s("%d", &year);
	printf("���̴� %d���Դϴ�.\n", calcAge(year));
	return 0;
}