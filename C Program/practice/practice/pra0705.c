#include<stdio.h>
int main()
{
	printf("������ �Է��ϼ���. ");
	double score;
	scanf_s("%lf", &score);
	if (score < 0)
		printf("����\n");
	else
	{
		if (score < 1.0)
			printf("F\n");
		else if (score < 2.0)
			printf("D\n");
		else if (score < 3.0)
			printf("C\n");
		else if (score < 4.0)
			printf("B\n");
		else if (score < 4.5)
			printf("A\n");
		else if (score == 4.5)
			printf("A+\n");
		else
			printf("����\n");
	}


	printf("�� ��?");
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < 10; i++)
		printf("%d x %d = %d\n", n, i, n * i);


	int num;
	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s


	return 0;
}