#include<stdio.h>
//�ǽ�2
double age_avg(int arr[])
{
	//printf("���? ");
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
	printf("�л����� �Է��Ͻÿ�. ");
	int n;
	scanf_s("%d", &n);
	int age[100];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &age[i]); //age�θ� �����ϸ� �ּҰ��� ����ϱ� ������ &age[i]�� �����ؾ�
		int k = age[i];
		sum += k;	
	}
	printf("�л� ���� ��� = %.2f\n", sum / (n*1.0));




	int stu[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d�� �л��� ���̸� �Է� ", i + 1);
		scanf_s("%d", &stu[i]);
	}
	printf("��� ���� = %.2f\n", age_avg(stu));



	//printf("�л��� 5���� ���� �Է� ");
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