#include<stdio.h>
//실습2
double age_avg(int arr[])
{
	//printf("몇명? ");
	//scanf_s("%d", &num);
	double sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	double avg = sum / 5;
	return avg;
	//printf("%d\n", arr[i]);
}

int main()
{
	printf("학생수를 입력하시오. ");
	int n;
	scanf_s("%d", &n);
	int age[100];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &age[i]); //age로만 접근하면 주소값을 출력하기 때문에 &age[i]로 접근해야
		int k = age[i];
		sum += k;	
	}
	printf("학생 나이 평균 = %.2f\n", sum / (n*1.0));




	int stu[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d번 학생의 나이를 입력 ", i + 1);
		scanf_s("%d", &stu[i]);
	}
	printf("평균 나이 = %.2f\n", age_avg(stu));



	//printf("학생들 5명의 나이 입력 ");
	//int n;
	//scanf_s("%d", &n);
	//int student_age[100];
	//for (int i = 0; i < 5; i++)
	//{
	//	scanf_s("%d", &student_age[n]);
	//	printf("%d, ", student_age[n]);
	//}
	return 0;
}