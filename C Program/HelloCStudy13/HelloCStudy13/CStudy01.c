#include<stdio.h>
struct Student
{
	char name[100]; //�л� �̸�
	int number; //�л� ��ȣ
}typedef Student;

int main()
{
	Student s1 = { .number = 1, .name = "����ȭ" };
	printf("%s %d\n", s1.name, s1.number);

	Student ss[3];
	ss[0] = (Student){ .number = 2, .name = "���ο�" };
	printf("%s %d\n", ss[0].name, ss[0].number);

	printf("�л��� �̸���?");
	gets(ss[1].name);
	printf("�л��� ��ȣ��?");
	scanf_s("%d", &ss[1].number);

	ss[2].number = 10;
	strcpy(ss[2].name, "��ȣ��");
	printf("%s %d\n", ss[1].name, ss[1].number);
	printf("%s %d\n", ss[2].name, ss[2].number);

	
	//1��
	Student s3 = { .number = 1,.name = "������" };
	printf("%d�� �л� %s", s3.number, s3.name);


	//2��
	/*
	int i;
	ss[5] = (Student){ .number = 5, .name = "��з�" };
	printf("�л��� ��ȣ��?");
	scanf_s("%d", &ss[i].number);
	while (ss[5].number == ss[i].number)
	{
		printf("�ٽ� �Է��Ͻÿ�.\n");
	}
	/*
	if (int a = i; ss[i].number == ss[a].number; i++)
		printf("�ٽ� �Է��Ͻÿ�.");
	else
		printf("%d\n", ss[i].number);
	*/		
}