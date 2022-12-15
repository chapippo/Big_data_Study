#include<stdio.h>
int main()
{
	int Sugar;
	printf("설탕 몇 kg?");
	scanf_s("%d", &Sugar);
	int pack = 0;
	while (1)
	{
		if (Sugar % 5 == 0)
		{
			pack += Sugar / 5;
			printf("%d묶음\n", pack);
			break;
		}
		Sugar -= 3;
		pack++;  //3kg 주머니 하나 증가
		if (Sugar < 0)
		{
			printf("-1\n");
			break;
		}

	}

	return 0;
}