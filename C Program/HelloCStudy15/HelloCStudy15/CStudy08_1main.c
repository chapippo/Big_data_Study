//CStudy06

//1. ���� �¾ ������ �Ű������� �ް� ����������
//���ڿ��� �����ϼ���.
#include<stdio.h>
int main()
{
	char thee[10];// = "������";	//thee��� ���� ��ü�� 10ĭ¥�� �迭�� ���� ��ġ�� ����Ų��
	int year;						//char thee[10]="������"�� ������ 10ĭ �ȿ� �� ����
	printf("�����ΰ���? ");			//(14�ٷ�) but 14�� ���� �Ŀ� �������� �ϸ� ���� ��ġ�� "������"�� �ִ� �Ŷ� 
	scanf_s("%d", &year);			//������ ����

	switch (year%12)
	{
	case 0:
		//thee = "������"; �̰� �� ��
		strcpy(thee, "������");//thee�� �����̶�� ���ڿ��� ���������		//���� char thee[10]���� ��⿡ strcpy ��� ok
		break;				  //'strcpy'�� ���ؼ�				  ��
	case 1: 
		strcpy(thee, "�߶�");
		break;
	case 2: 
		strcpy(thee, "����");
		break;
	case 3: 
		strcpy(thee, "������"); 
		break;
	case 4: 
		strcpy(thee, "���"); 
		break;
	case 5:
		strcpy(thee, "�Ҷ�"); 
		break;
	case 6: 
		strcpy(thee, "ȣ���̶�");
		break;
	case 7: 
		strcpy(thee, "�䳢��");
		break;
	case 8: 
		strcpy(thee, "���");
		break;
	case 9: 
		strcpy(thee, "���");
		break;
	case 10:
		strcpy(thee, "����");
		break;
	case 11: 
		strcpy(thee, "���");
		break;
	default:
		printf("error!");
		return -1; //�ڵ带 ������ѹ���
	}
	printf("%s", thee);
	return 0;
}