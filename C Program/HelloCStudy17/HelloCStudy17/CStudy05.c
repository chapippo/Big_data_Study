#include<stdio.h>
//실습2  1번
struct KBStudent
{
	int cScore;
	int javaScore;
	char name[100];
}typedef KBStudent;

//실습2  2번
int main()
{
	//학생 1명 만들어보기(대입) - 1
	KBStudent k1 = { 100, 100, "이동준" };

	//학생 1명 만들어보기(대입) - 2
	KBStudent k2 = { .cScore = 100, .javaScore = 100, .name = "이유나" };

	//학생 1명 만들어보기(대입) - 3
	KBStudent k3;
	k3.cScore = 100;
	k3.javaScore = 0;
	strcpy(k3.name, "김동준");

	//학생 1명 만들어보기(입력)
	KBStudent k4;
	//scanf_s("%d", &k4.cScore);
	//scanf_s("%d", &k4.javaScore);
	scanf_s("%d %d", &k4.cScore, &k4.javaScore);
	rewind(stdin);
	gets(k4.name);

	printf("c점수 : %d, java점수 : %d, 이름 : %s\n", k1.cScore, k1.javaScore, k1.name);
	printf("c점수 : %d, java점수 : %d, 이름 : %s\n\n", k2.cScore, k2.javaScore, k2.name);
	printf("c점수 : %d, java점수 : %d, 이름 : %s\n\n", k3.cScore, k3.javaScore, k3.name);
	printf("c점수 : %d, java점수 : %d, 이름 : %s\n\n", k4.cScore, k4.javaScore, k4.name);


	//최대 최소 구하는 것도 있어서
	//배열로 해야 한다.
	/*
	참고 - 5칸짜리 배열 선언하자마자 안에 값 넣기
	KBStudent student[5] 
		= { {.cScore = 100,.javaScore = 95,.name = "가나다"},
		{.cScore = 95,.javaScore = 90,.name = "라마바"},
		{.cScore = 90,.javaScore = 85,.name = "사아자"},
		{.cScore = 85,.javaScore = 80,.name = "차카타"},
		{.cScore = 80,.javaScore = 75,.name = "파하하"} };

	printf("5명 학생의 c점수 평균 : %d, 5명 학생의 java점수 평균 : %d\n",
		(((student[0].cScore + student[1].cScore + student[2].cScore + student[3].cScore + student[4].cScore)) / 5),
		(((student[0].javaScore + student[1].javaScore + student[2].javaScore +
			student[3].javaScore + student[4].javaScore)) / 5));
	*/
	KBStudent students[5];

	for (int i = 0; i < 5; i++)
	{
		rewind(stdin);
		printf("\n5번) 이름? ");
		gets(students[i].name);
		printf("C, Java 점수는? ");
		scanf_s("%d %d", &students[i].cScore, &students[i].javaScore);
	}

	//4번
	int cSum = 0;
	int javaSum = 0;

	for (int i = 0; i < 5; i++)
	{
		cSum += students[i].cScore;
		javaSum += students[i].javaScore;
	}
	printf("\nc, java 각각의 총합 %d / %d\n", cSum, javaSum);

	//5번
	double cAvg = cSum / 5.0;
	double javaAvg = javaSum / 5.0;
	printf("c, java 각각의 평균 %.2lf / %.2lf\n", cSum/5.0, javaSum/5.0);



	int maxC = 0;
	int maxJava = 0;
	double avg_max = 0;

	int index_max = 0; //1등 인덱스(평균)
	int index_max_C = 0; //1등 인덱스(C)
	int index_max_Java = 0; //1등 인덱스(Java)

	//maxC = students[0].cScore;
	//maxJava = students[0].javaScore;
	//avg_max = (students[0].cScore + students[0].javaScore) / 2.0;

	for (int i = 0; i < 5; i++)
	{
		if (maxC < students[i].cScore)	//1번째 학생이 제일 점수가 좋다고 가정하고 시작
		{
			maxC = students[i].cScore;	//만약 i번째 학생의 점수가 제일 높으면 가져온다
			index_max_C = i;
		}
		if (maxJava < students[i].javaScore)	//1번째 학생이 제일 점수가 좋다고 가정하고 시작
		{
			maxC = students[i].javaScore;	//만약 i번째 학생의 점수가 제일 높으면 가져온다
			index_max_Java = i;
		}
		if (avg_max < (students[i].cScore + students[i].javaScore) / 2.0) //avg_max보다 더크다 그러면 바꾼다
		{
			avg_max = (students[i].cScore + students[i].javaScore) / 2.0;
			index_max = i;			
		}
	}

	printf("C 1등 : %s\n", students[index_max_C].name);
	printf("Java 1등 : %s\n", students[index_max_Java].name);
	printf("평균 1등 : %s\n", students[index_max].name);

	return 0;
}