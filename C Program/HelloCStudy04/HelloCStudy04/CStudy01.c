#include<stdio.h>
#define ���� 0 // ��ũ�� ���
#define ���� 1




//������
//�����򰡿��� ���� ��
//���ڵ鿡�� �̸��� ���̴� ��
enum ��������
{
	//������,��,��,����,��,��,ȣ����,�䳢,��,��,��,��
	��=4,��,ȣ����,�䳢,��,��,��,��,������=0,��,��,����
};


//                                                                   << ���ǹ� >>

int main()
{
	const int �� = 2;             // ����� �� �� ���� ���� �� �ٲ� @@@@@@@

	/* 1��)
	�¾ �� �Է��ϰ� �׿� ���� ���� ���
	12 1 2 �ܿ�
	3 4 5 ��
	6 7 8 ����
	9 10 11 �ܿ�
	�� �� �����޼���*/

	/*int mon;
printf("�¾ ���� �Է��ϼ���. ");
	scanf_s("%d", &mon);

	if (mon == 12 || mon == 1 || mon ==2)
		printf("�ܿ�");
	else if (mon >=3 && mon =< 5)
		printf("��");
	else if (mon <=8 && mon =>6 )
		printf("����");
	else if (mon =<11 && mon => 9)
		printf("����");
	else
		printf("�ߺ�");

		*/
	int month;
	printf("�¾ ���� �Է��ϼ���? ");
	scanf_s("%d", &month);

	//if��
	if (month == 12 || month == 1 || month == 2)
		printf("�ܿ�\n");
	else if (month >= 3 && month <= 5)
		printf("��\n");
	else if (month >= 6 && month <= 8)
		printf("����\n");
	else if (month >= 9 && month <= 11)
		printf("����\n");
	else
		printf("�ߺ��\n");


	//switch tap tap
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
		printf("�ߺ���\n");
		break;
	}



	//�ּ� ������ ���Ͽ��� �����ϱ�                           @@@@@@@@@@@��������
	//ctrl + a : ��ü ����
	//ctrl + k,f : ����
	// ctrl + k,c : �ּ�
	// ctrl + k,u : �ּ� ����
	





	/* 2��)
	���� ������������ �Ѵ�.(%3 �̿�)
	player1�� player2�� �ְ�, player1�� �������� ���и� ������.
	����� ���� 9���̴� switch���� �̿�����.*/

	/*             int rcp = 0;

	switch (rcp)
	{
	case 0:
		printf("\n����");
		switch(rcp2)
		{ case 0:  }
	}
	*/

	printf("���� ���� ��? (�÷��̾�1)");
	int p1, p2;
	scanf_s("%d", &p1);
	printf("���� ���� ��? (�÷��̾�2)");
	scanf_s("%d", &p2);
	p1 %= 3;   //3���� ���� ������������ ���� ���� �� , 0,1,2 �������� �ۿ� ����
	p2 %= 3;
	switch (p1)
	{
	case 0://����
		printf("p1: ����\n");
		switch (p2)
		{
		case 0:
			printf("p2: ����\n");
			printf("���\n");
			break;
		case 1:
			printf("p2: ����\n");
			printf("��\n");
			break;
		case 2:
			printf("p2: ��\n");
			printf("�̱�\n");
			break;
		default:
			break;
		}
		break;
	case 1://����
		printf("p1: ����\n");
		switch (p2)
		{
		case 0:
			printf("p2: ����\n");
			printf("�̱�\n");
			break;
		case 1:
			printf("p2: ����\n");
			printf("���\n");
			break;
		case 2:
			printf("p2: ��\n");
			printf("��\n");
			break;
		default:
			break;
		}
		break;
	case 2://��
		printf("p1: ��\n");
		switch (p2)
		{
		case 0:
			printf("p2: ����\n");
			printf("��\n");
			break;
		case 1:
			printf("p2: ����\n");
			printf("�̱�\n");
			break;
		case 2:
			printf("p2: ��\n");
			printf("���\n");
			break;
		default:
			break;
		}
		break;


	default:   //���ܻ�Ȳ�� ��� �� ��
		break;
	}


	/*
	int pla1, pla2;
	printf("���� ���� ��? (�÷��̾�1)");
	scanf_s(% d, &pla1);
	printf("���� ���� ��? (�÷��̾�2)");
	scanf_s(% d, &pla2);
	*/

	if (p1 == ����)
	{
		printf("����!\n");
		if (p2 == ����)
		{
			printf("p2 ����!\n");
			printf("���\n");
		}
		else if (p2 == ����)
		{
			printf("p2 ����!\n");
			printf("��\n");
		}
		else if (p2 == ��)
		{
			printf("p2 ��!\n");
			printf("�̱�\n");
		}
	}
	else if (p1 == ����)
	{
		printf("����!\n");
		if (p2 == ����)
		{
			printf("p2 ����!\n");
			printf("�̱�\n");
		}
		else if (p2 == ����)
		{
			printf("p2 ����\n");
			printf("���\n");
		}
		else if (p2 == ��)
		{
			printf("p2 ��\n");
			printf("��\n");
		}
	}
	else if (p1 == ��)
	{
		printf("��!\n");
		if (p2 == ����)
		{
			printf("p2 ����!\n");
			printf("��\n");
		}
		else if (p2 == ����)
		{
			printf("p2 ����\n");
			printf("�̱�\n");
		}
		else if (p2 == ��)
		{
			printf("p2 ��\n");
			printf("���\n");
		}
	}



	/* 3��)
	�ڽ��� �¾ ������ �Է��ϰ� �׿� ���� �츦 ����Ѵ�.
	����� ���� ������
	��->��->ȣ����->�䳢->��->��->��->��->������->��->��->���� �̴�.
	*/
	// ����� ���� 12��


	printf("�¾ �⵵�� �Է��Ͻÿ�. ");
	int year;
	scanf_s("%d", &year);
	switch (year % 12)
	{
	case 0:
		printf("������\n");
		break;
	case 1:
		printf("��\n");
		break;
	case 2:
		printf("��\n");
		break;
	case 3:
		printf("����\n");
		break;
	case 4:
		printf("��\n");
		break;
	case 5:
		printf("��\n");
		break;
	case 6:
		printf("ȣ����\n");
		break;
	case 7:
		printf("�䳢\n");
		break;
	case 8:
		printf("��\n");
		break;
	case 9:
		printf("��\n");
		break;
	case 10:
		printf("��\n");
		break;
	case 11:
		printf("��\n");
		break;
	default:
		break;
	}






	int myThee = year % 12;

	enum �������� temp = ������;
	printf("%d\n", temp);
	


	if (myThee == ������)
		printf("������\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ����)
		printf("����\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ȣ����)
		printf("ȣ����\n");
	else if (myThee == �䳢)
		printf("�䳢\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ��)
		printf("��\n");






	return 0;
}