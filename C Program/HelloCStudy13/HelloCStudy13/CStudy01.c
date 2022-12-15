#include<stdio.h>
struct Student
{
	char name[100]; //학생 이름
	int number; //학생 번호
}typedef Student;

int main()
{
	Student s1 = { .number = 1, .name = "차승화" };
	printf("%s %d\n", s1.name, s1.number);

	Student ss[3];
	ss[0] = (Student){ .number = 2, .name = "도민영" };
	printf("%s %d\n", ss[0].name, ss[0].number);

	printf("학생의 이름은?");
	gets(ss[1].name);
	printf("학생의 번호는?");
	scanf_s("%d", &ss[1].number);

	ss[2].number = 10;
	strcpy(ss[2].name, "최호준");
	printf("%s %d\n", ss[1].name, ss[1].number);
	printf("%s %d\n", ss[2].name, ss[2].number);

	
	//1번
	Student s3 = { .number = 1,.name = "도광현" };
	printf("%d번 학생 %s", s3.number, s3.name);


	//2번
	/*
	int i;
	ss[5] = (Student){ .number = 5, .name = "김론론" };
	printf("학생의 번호는?");
	scanf_s("%d", &ss[i].number);
	while (ss[5].number == ss[i].number)
	{
		printf("다시 입력하시오.\n");
	}
	/*
	if (int a = i; ss[i].number == ss[a].number; i++)
		printf("다시 입력하시오.");
	else
		printf("%d\n", ss[i].number);
	*/		
}