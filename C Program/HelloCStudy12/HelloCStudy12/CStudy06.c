#include<stdio.h>
//구조체
struct Stu
{
	int math;
	int eng;
	int kor;
}typedef Stu;

int main()
{
	Stu s1;
	s1.math = 50;
	s1.kor = 60;
	s1.eng = 100;

	Stu s2;
	s2.math = 100;
	s2.kor = 100;
	s2.eng = 0;

	//1개의 변수가 3개의 값을 저장함
	Stu s3;
	scanf_s("%d", &s3.math);
	scanf_s("%d", &s3.eng);
	scanf_s("%d", &s3.kor);

	printf("%d %d %d\n", s3.math, s3.eng, s3.kor);
	printf("평균 : %d\n", ((s3.math + s3.eng + s3.kor) / 3));

	return 0;
}