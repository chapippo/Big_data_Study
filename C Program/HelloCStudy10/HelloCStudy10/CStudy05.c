#include<stdio.h>
#include"testsum.h"
//1��
int main()
{
	
	printf("���� a, b, c�� �Է��Ͻÿ�.");
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int result = testsum(a, b, c);
	printf("c�� ��� �κ��� ������ a���� b������ �� : %d\n", result);
	

	//2��
	printf("Sec(��) ���� �Է��Ͻÿ�.\n");
	int s;
	scanf_s("%d", &s);
	clock(s);





	//2��
	//{
	//	printf("Sec(��) ���� �Է��Ͻÿ�.");
	//	int min, sec;
	//	scanf_s("%d %d", &min, &sec);
	//	int result = clock(min, sec);
	//	printf("%d�� %��\n", result);
	//}



	//3��

	//4��

	//5��
	int num1;
	int sum = 0;
	printf("1���� num1������ �� ");
	scanf_s("%d", &num1);
	for (int i=1; i <= num1; i++)
	{
		sum += i;
	}
	printf("���� %d\n", sum);




}