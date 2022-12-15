#include<stdio.h>
int main()
{
	if (0)
	{
		int x, y;
		printf("x와 y을 값은? ");
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
		printf("당신의 나이는? ");
		scanf_s("%d", &age);
		if (age < 0 || age>200)
			printf("타노스");
	}


	int h, m;
	printf("시간 입력하세요. ");
	scanf_s("%d", &h);


	if (h >= 24)
	{
		printf("값이 너무 크니까 다시 입력하세요.");
	}
	h = h % 24;


	printf("분 입력하세요. ");
	scanf_s("%d", &m);


	if (m < 0)
	{
		m = m + 60;
		h = h - 1;
		if (h < 0)
			h = h + 24;
	}
	m = m - 45;

	printf("알람 시간 : %d시 %d분", h, m);


	return 0;
}