#include<stdio.h>
char* season(int month)
{
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		return "�ܿ�";
	case 3:
	case 4:
	case 5:
		return "��";
	case 6:
	case 7:
	case 8:
		return "����";
	case 9:
	case 10:
	case 11:
		return "����";
	default:
		return "�����ƴ�";
	}	
}
int main()
{
	int mon;
	printf("3��) ���� �¾����? ");
	scanf_s("%d", &mon);
	printf("%s", season(mon));
}