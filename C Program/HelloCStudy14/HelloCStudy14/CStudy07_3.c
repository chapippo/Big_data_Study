#include<stdio.h>
/*int*/void Season(int s)
{
	switch (s)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	default:
		printf("XXXXX\n");
		break;
	}
	//return 1;
}

int main()
{
	int s;
	printf("3��) ���?");
	scanf_s("%d", &s);
	//printf("%s",Season(s));
	Season(s);

	return 0;
}
