#include<stdio.h>
int age()
{
	int year;
	scanf_s("%d", &year);
	return 2023 - year;
}

int age_2(int year)
{
	return 2023 - year;
}

int main()
{
	//4��
	printf("%d��\n\n", age());

	//5��
	int year;
	printf("�� �⵵�� �¾����? ");
	scanf_s("%d", &year);
	printf("%d��", age_2(year));

	return 0;
}