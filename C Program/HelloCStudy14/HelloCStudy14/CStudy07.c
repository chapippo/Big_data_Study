#include<stdio.h>
//1��
int main()
{
	int ss;
	printf("1��) �� ��? ");
	scanf_s("%d", &ss);
	switch (ss)
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
		
	return 0;
}