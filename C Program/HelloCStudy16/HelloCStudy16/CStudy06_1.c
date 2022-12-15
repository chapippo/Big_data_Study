#include<stdio.h>
#include<string.h>
struct DaeguFC
{
	char name[15];
	char position[10];
	int age;
}typedef DGF;

int main()
{
	DGF man1, man2;
	strcpy_s(man1.name,sizeof(man1.name), "이진용");
	strcpy_s(man1.position, sizeof(man1.position), "DMF");
	/*strcpy_s(man1.age, sizeof(man1.age), 21);*/
	printf("나이? ");
	scanf_s("%d", &man1.age);


	printf("이름 입력 : ");
	rewind(stdin);
	gets(man2.name);
	printf("포지션 입력 : ");
	gets(man2.position);
	//scanf_s("%s", &man2.position);
	printf("나이 입력 : ");
	scanf_s("%d", &man2.age);

	printf("이름 : %s\n포지션 : %s\n나이 : %d살\n", man1.name, man1.position, man1.age);
	printf("이름 : %s\n포지션 : %s\n나이 : %d살\n", man2.name, man2.position, man2.age);

}