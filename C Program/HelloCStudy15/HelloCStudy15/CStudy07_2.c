#include<stdio.h>
#include<string.h> //<-�� ��� ���� ���Խ�Ű��, strcpy�� strcat�� _s�� �ٿ��� ��
//stdio.h�� ������ strcpy,


char* ganzi(int year)
{	//���ڿ� ��ü�� �迭�̴� �迭 �ȿ� �迭�̶� 2���� �迭
	char gan[10][10] = { "��","��","��","��","��","��","��","��","��","��"};
	char zi[12][10] = { "��","��","��","��","��","��","��","��","��","��","��","��"};

	static char gan_zi[10];// = "";

	//strcat �� �̾���̱�
	strcat_s(gan_zi, 10, gan[year % 10]);
	strcat_s(gan_zi, 10, zi[year % 12]);

	//printf("%s��\n", gan_zi);
	return gan_zi;
}
int main()
{
	int year;
	printf("2��) �¾ �⵵��? ");
	scanf_s("%d", &year);
	printf("%s��", ganzi(year));
}