//CStudy08

//2-1. ���� �¾ ������ �Ű������� �ް� ������ ����ϼ���
#include<stdio.h>
int main()
{
	printf("���� �¾����? ");
	int year;
	scanf_s("%d", &year);
	int ganji = year % 10;
	int thee = year % 12;
	//���� 0���� �����̶�
	//����Ӱ� �������� ����
	//�������� �����ι� �������
	switch (ganji)
	{
	case 0:
		printf("��");
		break;
	case 1:
		printf("��");
		break;
	case 2:
		printf("��");
		break;
	case 3:
		printf("��");
		break;
	case 4:
		printf("��");
		break;
	case 5:
		printf("��");
		break;
	case 6:
		printf("��");
		break;
	case 7:
		printf("��");
		break;
	case 8:
		printf("��");
		break;
	case 9:
		printf("��");
		break;
	default:
		printf("error!");
		break;
	}
	//�������� �����ι� �������
	switch (thee)
	{
	case 0:
		printf("��");
		break;
	case 1:
		printf("��");
		break;
	case 2:
		printf("��");
		break;
	case 3:
		printf("��");
		break;
	case 4:
		printf("��");
		break;
	case 5:
		printf("��");
		break;
	case 6:
		printf("��");
		break;
	case 7:
		printf("��");
		break;
	case 8:
		printf("��");
		break;
	case 9:
		printf("��");
		break;
	case 10:
		printf("��");
		break;
	case 11:
		printf("��");
		break;
	default:
		printf("error!");
		break;
	}

	return 0;
}
