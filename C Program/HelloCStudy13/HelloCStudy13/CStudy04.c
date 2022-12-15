#include<stdio.h>
struct Student
{	int num;
	char name[100];
}typedef Student;
void printStudent(Student s)
{	printf("%d번 학생 %s\n", s.num, s.name);
}
int main()
{
	//Student s = { .name = "차승화",.num = 1 };		//그냥 해본 것
	//printStudent(s);
	Student students[3]; //학생은 3명만
	for (int i = 0; i < 3; i++)	
	{
		int temp;
		//Student temp;
		printf("학생의 번호?\n");
		scanf_s("%d", &temp/*.num*/);
		int duplicate = 0;
		for (int j = 0; j < i; j++)//첫번째부터 i번째 직전까지 다 체크해보고
		{
			if (students[j].num == temp)
			{
				printf("중복번호!\n");
				i--;				//중복 되는 게 있으면 --
				duplicate = 1;
				break;
			}
		}
		if (duplicate == 0)		//중복이 없는 경우다 하면 이름을 집어넣는다
		{
			students[i].num = temp;
			printf("이름은?\n");
			rewind(stdin);
			gets(students[i].name);
		}
	}
	for (int i = 0; i < 3; i++)
		printStudent(students[i]);

	return 0;
}