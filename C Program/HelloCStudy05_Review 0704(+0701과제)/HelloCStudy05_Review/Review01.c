#include<stdio.h>
int main()
{
	//1��
	printf("�ȳ��ϼ��� �� �̸��� ����ȭ�Դϴ�.\n");


	//2��
	int age;                   //���̸� �Է� �޾ƾ߰���
	printf("���� ���̴�?");
	scanf_s("%d", &age);
	printf("�� ���̴� %d���Դϴ�.\n", age);


	//3��
	/*��Ÿ����� ��Ģ ��� ����ϱ� (a^2 + b^2 = c^2 ������ c^2 �� ����ϸ� ��)
	�Է�1: 3
	�Է�2: 4
	��� : 25 */
	printf("a^2+b^2=c^2�� ����϶�.\n");
	printf("a��?");
	int a, b;                                       //����, �Է��� ���� �����ϴ� �� @@@@@@@@@@@, �ڿ� ����� �� ��
	scanf_s("%d", &a);
	printf("b��?");
	scanf_s("%d", &b);
	printf("%d\n", (a * a + b * b));


	printf("�Է�1: ");
	scanf_s("%d", &a);
	printf("�Է�2: ");
	scanf_s("%d", &b);
	printf("��� : %d\n", (a * a + b * b));


	//4�� 
	/*printf("�̸���?\n");
	rewind(stdin);
	char name[100];
	gets(name);
	printf("�� ���ڸ� �л��� �̸��� %s�Դϴ�.\n", name);*/


	char name[100];
	printf_s("���ڸ� �л��� �̸���?\n");
	rewind(stdin);
	//scanf_s("%s", name, sizeof(name));   //scanf ���� space�� ©��       //���ڴ� scanf @@@@@@@@
	gets(name);                                                      //���� �Է��� ���� gets�� ���� @@@@@@@@@
	printf("�� ���ڸ� �л��� �̸��� %s�Դϴ�.\n", name);



	//5��
	/*�޷��� �Է¹����� �׿� ���� ���
		�Է� : 1
		��� : 1298.89 �޷�*/
		//int money;
		//printf("������ �ٲٰ� ���� �޷���?\n", money);
		//scanf_s("%.2f", &money);
		//printf("%.2f\n",money*1298.89);

	double dollar;
	printf("�Է� : ");
	scanf_s("%lf", &dollar);
	printf("��� : %.lf KRW\n", dollar * 1298.89);   //



	return 0;
}