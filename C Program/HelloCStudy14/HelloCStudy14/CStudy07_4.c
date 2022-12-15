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
	//4번
	printf("%d살\n\n", age());

	//5번
	int year;
	printf("몇 년도에 태어났나요? ");
	scanf_s("%d", &year);
	printf("%d살", age_2(year));

	return 0;
}