#include<stdio.h>
//�ǽ� 3�� : '�Ű�����'�� ���ؼ� ���� ����ϴ� �Լ�
void printseason(int month)
{
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
		printf("error!\n");
		break;
	}
}

int main()
{
	int month;
	printf("3��) �¾ ���� �Է��ϼ���. ");
	scanf_s("%d", &month);
	printseason(month);

	return 0;
}