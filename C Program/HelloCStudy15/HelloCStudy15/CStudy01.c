#include<stdio.h>
//�ǽ� 1��
int main()
{
	int month;
	printf("1��) �¾ ���� �Է��ϼ���. ");
	scanf_s("%d", &month);
	switch (month)
	{
		case 12:
			month = 6;	//case 2: ���� ���� ��
		case 1:			//���⼭�� month ���� �ٲ�� ���� ����� �����Ƿ�
		case 2:			//�׳� �� ������
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
	return 0;
}