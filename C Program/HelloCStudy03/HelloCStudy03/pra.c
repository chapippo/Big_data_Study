#include<stdio.h>
int main()
{
	if (0)
	{
		int x, y;
		printf("x�� y�� ����? ");
		scanf_s("%d,%d", &x, &y);

		if (x > 0 && y > 0)
			printf("1");
		else if (x < 0 && y>0)
			printf("2");
		else if (x < 0 && y < 0)
			printf("3");
		else if (x > 0 && y < 0)
			printf("4");
		else
			printf("0");
	}

	if (0)
	{
		int age;
		printf("����� ���̴�? ");
		scanf_s("%d", &age);
		if (age < 0 || age>200)
			printf("Ÿ�뽺");
	}


	int h, m;
	printf("�ð� �Է��ϼ���. ");
	scanf_s("%d", &h);


	if (h >= 24)
	{
		printf("���� �ʹ� ũ�ϱ� �ٽ� �Է��ϼ���.");
	}
	h = h % 24;


	printf("�� �Է��ϼ���. ");
	scanf_s("%d", &m);


	if (m < 0)
	{
		m = m + 60;
		h = h - 1;
		if (h < 0)
			h = h + 24;
	}
	m = m - 45;

	printf("�˶� �ð� : %d�� %d��", h, m);


	return 0;
}