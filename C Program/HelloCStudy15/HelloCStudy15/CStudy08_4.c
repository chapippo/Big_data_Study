//CStudy10

//2-2. ���� �¾ ������ �Ű������� �ް� ������ '����'�ϼ���
#include<stdio.h>
char* myGanJi(int year)
{
	int ganji = year % 10;
	int thee = year % 12;
	//���� 0���� �����̶�
	//����Ӱ� �������� ����
	//�������� �����ι� �������

	//3���� �� ����
	//�ѱ��� 1���� 2byte�̰�, ���� �� �� �� ����
	//�����
	char ganjiResult[3]; // ���� ����
	char theeResult[3]; // �� ����
	static char result[5]; //�� �迭 (ganjiResult,theeResult)
	//�� ������ ���⿡ ��ĥ ��
	//static���� ������ �� ���� ����� ����
	//ũ�⸦ �˳��ϰ� ��ų�(result[1024]
	//�����迭�� ���� �ȴ�.


	switch (ganji)
	{
	case 0:
		strcpy(ganjiResult,"��");
		break;
	case 1:
		strcpy(ganjiResult,"��");
		break;
	case 2:
		strcpy(ganjiResult,"��");
		break;
	case 3:
		strcpy(ganjiResult,"��");
		break;
	case 4:
		strcpy(ganjiResult,"��");
		break;
	case 5:
		strcpy(ganjiResult,"��");
		break;
	case 6:
		strcpy(ganjiResult,"��");
		break;
	case 7:
		strcpy(ganjiResult,"��");
		break;
	case 8:
		strcpy(ganjiResult,"��");
		break;
	case 9:
		strcpy(ganjiResult,"��");
		break;
	default:
		strcpy(ganjiResult,"error!");
		break;
	}
	//�������� �����ι� �������
	switch (thee)
	{
	case 0:
		strcpy(theeResult,"��");
		break;
	case 1:
		strcpy(theeResult,"��");
		break;
	case 2:
		strcpy(theeResult,"��");
		break;
	case 3:
		strcpy(theeResult,"��");
		break;
	case 4:
		strcpy(theeResult,"��");
		break;
	case 5:
		strcpy(theeResult,"��");
		break;
	case 6:
		strcpy(theeResult,"��");
		break;
	case 7:
		strcpy(theeResult,"��");
		break;
	case 8:
		strcpy(theeResult,"��");
		break;
	case 9:
		strcpy(theeResult,"��");
		break;
	case 10:
		strcpy(theeResult,"��");
		break;
	case 11:
		strcpy(theeResult,"��");
		break;
	default:
		strcpy(theeResult,"error!");
		break;
	}
	//strcat, concat ���� �ᵵ ������..
	//for������
	for (int i = 0; i < 2; i++)
		result[i] = ganjiResult[i];
	for (int i = 0; i < 2; i++)
		result[i + 2] = theeResult[i];
	result[4] = NULL;
	return result;
}
int main()
{
	printf("���� �¾����? ");
	int year;
	scanf_s("%d", &year);
	printf("%s",myGanJi(year));
	//printf("%s", printGanji(year));
	return 0;
}