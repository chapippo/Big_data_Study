#include<stdio.h>
//�ǽ�2  1��
struct KBStudent
{
	int cScore;
	int javaScore;
	char name[100];
}typedef KBStudent;

//�ǽ�2  2��
int main()
{
	//�л� 1�� ������(����) - 1
	KBStudent k1 = { 100, 100, "�̵���" };

	//�л� 1�� ������(����) - 2
	KBStudent k2 = { .cScore = 100, .javaScore = 100, .name = "������" };

	//�л� 1�� ������(����) - 3
	KBStudent k3;
	k3.cScore = 100;
	k3.javaScore = 0;
	strcpy(k3.name, "�赿��");

	//�л� 1�� ������(�Է�)
	KBStudent k4;
	//scanf_s("%d", &k4.cScore);
	//scanf_s("%d", &k4.javaScore);
	scanf_s("%d %d", &k4.cScore, &k4.javaScore);
	rewind(stdin);
	gets(k4.name);

	printf("c���� : %d, java���� : %d, �̸� : %s\n", k1.cScore, k1.javaScore, k1.name);
	printf("c���� : %d, java���� : %d, �̸� : %s\n\n", k2.cScore, k2.javaScore, k2.name);
	printf("c���� : %d, java���� : %d, �̸� : %s\n\n", k3.cScore, k3.javaScore, k3.name);
	printf("c���� : %d, java���� : %d, �̸� : %s\n\n", k4.cScore, k4.javaScore, k4.name);


	//�ִ� �ּ� ���ϴ� �͵� �־
	//�迭�� �ؾ� �Ѵ�.
	/*
	���� - 5ĭ¥�� �迭 �������ڸ��� �ȿ� �� �ֱ�
	KBStudent student[5] 
		= { {.cScore = 100,.javaScore = 95,.name = "������"},
		{.cScore = 95,.javaScore = 90,.name = "�󸶹�"},
		{.cScore = 90,.javaScore = 85,.name = "�����"},
		{.cScore = 85,.javaScore = 80,.name = "��īŸ"},
		{.cScore = 80,.javaScore = 75,.name = "������"} };

	printf("5�� �л��� c���� ��� : %d, 5�� �л��� java���� ��� : %d\n",
		(((student[0].cScore + student[1].cScore + student[2].cScore + student[3].cScore + student[4].cScore)) / 5),
		(((student[0].javaScore + student[1].javaScore + student[2].javaScore +
			student[3].javaScore + student[4].javaScore)) / 5));
	*/
	KBStudent students[5];

	for (int i = 0; i < 5; i++)
	{
		rewind(stdin);
		printf("\n5��) �̸�? ");
		gets(students[i].name);
		printf("C, Java ������? ");
		scanf_s("%d %d", &students[i].cScore, &students[i].javaScore);
	}

	//4��
	int cSum = 0;
	int javaSum = 0;

	for (int i = 0; i < 5; i++)
	{
		cSum += students[i].cScore;
		javaSum += students[i].javaScore;
	}
	printf("\nc, java ������ ���� %d / %d\n", cSum, javaSum);

	//5��
	double cAvg = cSum / 5.0;
	double javaAvg = javaSum / 5.0;
	printf("c, java ������ ��� %.2lf / %.2lf\n", cSum/5.0, javaSum/5.0);



	int maxC = 0;
	int maxJava = 0;
	double avg_max = 0;

	int index_max = 0; //1�� �ε���(���)
	int index_max_C = 0; //1�� �ε���(C)
	int index_max_Java = 0; //1�� �ε���(Java)

	//maxC = students[0].cScore;
	//maxJava = students[0].javaScore;
	//avg_max = (students[0].cScore + students[0].javaScore) / 2.0;

	for (int i = 0; i < 5; i++)
	{
		if (maxC < students[i].cScore)	//1��° �л��� ���� ������ ���ٰ� �����ϰ� ����
		{
			maxC = students[i].cScore;	//���� i��° �л��� ������ ���� ������ �����´�
			index_max_C = i;
		}
		if (maxJava < students[i].javaScore)	//1��° �л��� ���� ������ ���ٰ� �����ϰ� ����
		{
			maxC = students[i].javaScore;	//���� i��° �л��� ������ ���� ������ �����´�
			index_max_Java = i;
		}
		if (avg_max < (students[i].cScore + students[i].javaScore) / 2.0) //avg_max���� ��ũ�� �׷��� �ٲ۴�
		{
			avg_max = (students[i].cScore + students[i].javaScore) / 2.0;
			index_max = i;			
		}
	}

	printf("C 1�� : %s\n", students[index_max_C].name);
	printf("Java 1�� : %s\n", students[index_max_Java].name);
	printf("��� 1�� : %s\n", students[index_max].name);

	return 0;
}