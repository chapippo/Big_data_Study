#include<stdio.h>
//1��
char* DDI_year(int year)
{
	int animal = year % 12;
	switch (animal)
	{
	case 0: return "�����̶�";
	case 1: return "�߶�";
	case 2: return "����";
	case 3: return "������";
	case 4: return "���";
	case 5: return "�Ҷ�";
	case 6: return "ȣ���̶�";
	case 7: return "�䳢��";
	case 8: return "���";
	case 9: return "���";
	case 10: return "����";
	case 11: return "���";
	default:
		return -1;
		break;
	}
}
int main()
{
	int n;
	printf("1��) ���� �¾����? ");
	scanf_s("%d", &n);
	//char result = DDI_year(n);
	printf("%s\n", DDI_year(n));
}