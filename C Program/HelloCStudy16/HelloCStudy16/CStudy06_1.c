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
	strcpy_s(man1.name,sizeof(man1.name), "������");
	strcpy_s(man1.position, sizeof(man1.position), "DMF");
	/*strcpy_s(man1.age, sizeof(man1.age), 21);*/
	printf("����? ");
	scanf_s("%d", &man1.age);


	printf("�̸� �Է� : ");
	rewind(stdin);
	gets(man2.name);
	printf("������ �Է� : ");
	gets(man2.position);
	//scanf_s("%s", &man2.position);
	printf("���� �Է� : ");
	scanf_s("%d", &man2.age);

	printf("�̸� : %s\n������ : %s\n���� : %d��\n", man1.name, man1.position, man1.age);
	printf("�̸� : %s\n������ : %s\n���� : %d��\n", man2.name, man2.position, man2.age);

}