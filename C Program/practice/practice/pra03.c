#include<stdio.h>
int main()
{
	if (0)
	{
		int month;
		printf("�¾ ����? ");
		scanf_s("%d", &month);

		if (month == 12 || month == 1 || month == 2)
			printf("�ܿ�\n");
		else if (month >= 3 && month <= 5)
			printf("��\n");
		else if (month >= 6 && month <= 8)
			printf("����\n");
		else if (month >= 9 && month <= 11)
			printf("����\n");
		else
			printf("�ߺ�\n");
	}

	int month;
	//printf("%d", month);
	//month = 10;                                   ���� ���� �� ���ָ� ������ ���� �����
	printf("�¾ ����? ");
	scanf_s("%d", &month);
	switch (month)
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
		printf("�ߺ�\n");
		break;
	}





	return 0;
}