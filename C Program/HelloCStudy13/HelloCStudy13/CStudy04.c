#include<stdio.h>
struct Student
{	int num;
	char name[100];
}typedef Student;
void printStudent(Student s)
{	printf("%d�� �л� %s\n", s.num, s.name);
}
int main()
{
	//Student s = { .name = "����ȭ",.num = 1 };		//�׳� �غ� ��
	//printStudent(s);
	Student students[3]; //�л��� 3��
	for (int i = 0; i < 3; i++)	
	{
		int temp;
		//Student temp;
		printf("�л��� ��ȣ?\n");
		scanf_s("%d", &temp/*.num*/);
		int duplicate = 0;
		for (int j = 0; j < i; j++)//ù��°���� i��° �������� �� üũ�غ���
		{
			if (students[j].num == temp)
			{
				printf("�ߺ���ȣ!\n");
				i--;				//�ߺ� �Ǵ� �� ������ --
				duplicate = 1;
				break;
			}
		}
		if (duplicate == 0)		//�ߺ��� ���� ���� �ϸ� �̸��� ����ִ´�
		{
			students[i].num = temp;
			printf("�̸���?\n");
			rewind(stdin);
			gets(students[i].name);
		}
	}
	for (int i = 0; i < 3; i++)
		printStudent(students[i]);

	return 0;
}