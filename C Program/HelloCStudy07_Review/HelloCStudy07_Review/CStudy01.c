#include<stdio.h>
int main()
{
	//1��
	//5���� ���ڸ� �Է¹ް� �� �߿��� ���� ū ���ڿ� ���� ���ڸ� ã������.
	/*
	printf("�ټ����� ���ڸ� �Է��ϼ���. ");
	int a, b, c, d, e;
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if ()
	*/
	
	printf("�ټ����� ���ڸ� �Է��ϼ���. ");
	int a, b, c, d, e, max, min;
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	max = a;
	min = a;

	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	if (e > max)
		max = e;


	if (b < min)
		min = b;
	if (c < min)
		min = c;
	if (d < min)
		min = d;
	if (e < min)
		min = e;

	printf("�ִ� : %d, �ּ� : %d\n", max, min);



	
	//2��
	/*
	
	char se[100];
	char sen[100];
	printf("1�� ���ڿ� �Է� ");
	scanf_s("%s", se);
	printf("2�� ���ڿ� �Է� ");
	scanf_s("%s", sen);

	if (se == sen)
		break;
	else if()

	*/







	return 0;
}