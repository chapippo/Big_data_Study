#include<stdio.h>
struct charac
{
	int xx;
	int yy;
	int zz;
}typedef charac;

struct animal
{
	int dog;
	int cat;
	int ham;
}typedef animal;

struct People
{
	char name[10];
	int age;
	float weight;
	int height;
}typedef People;

struct DaeguFC
{
	char name[10];
	int position;
	int age;
}typedef DGF;

char* player()
{


}
int main()
{
	charac s1;
	s1.xx = 1;
	s1.yy = 9;

	charac s2;
	s2.xx = 2;
	s2.yy = 9;

	printf("%d %d\n", s1.xx, s1.yy);
	printf("%d %d\n", s2.xx, s2.yy);

	charac s3;
	scanf_s("%d", &s3.xx);
	scanf_s("%d", &s3.yy);
	scanf_s("%d", &s3.zz);

	printf("%d %d %d\n", s3.xx, s3.yy, s3.zz);
	printf("��ǥ : %d %d %d\n", s3.xx, s3.yy, s3.zz);


	People data;
	printf("�̸� : ");
	scanf_s("%s", data.name, 10);
	printf("���� : ");
	scanf_s("%d", &data.age);
	printf("Ű : ");
	scanf_s("%d", &data.height);
	printf("������ : ");
	scanf_s("%f", &data.weight);

	printf("\n�Ʒ��� ����.\n");
	printf("�̸� : %s\n",data.name);
	printf("���� : %d��\n",data.age);
	printf("Ű : %dcm\n",data.height);
	printf("������ : %.2lfkg",data.weight);




	
	
	return 0;
}