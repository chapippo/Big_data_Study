#include<stdio.h>
int main()
{
	//1��
	printf("���̸� �Է��ϼ���. ");							
	int age;
	scanf_s("%d", &age);

	if (age < 0)
	{
		printf("����\n");
	}
	else
	{
		age /= 10; //34 -> 3 //       age = age/10  
		switch (age)
		{
		case 0: //0~9
			printf("��������\n");
			break;
		case 1: //10~19
			printf("�޽ĸԴ� ģ����\n");
			break;
		case 2: //20~29
			printf("û��\n");
			break;
		case 3: //30~39
			printf("���߷�\n");
			break;
		case 4: //40~49
			printf("������\n");
		default: //50~ ���Ѵ�
			printf("������\n");
			break;
		}
	}
		


	if(0)
	{
	switch (age / 10)
	{
	case 0:
		if (age > 0)
			printf("����\n");
		else
			printf("������");
		break;
	case 1:
		printf("�޽�\n");
		break;
	case 2:
		printf("û��\n");
		break;
	case 3:
		printf("���߷�\n");
		break;
	case 4:
		printf("������\n");
		break;

	default:
		printf("������\n");
		break;
	}
}



	//2��
	printf("������ �Է��ϼ���. ");
	double score;  //float�� �ص� ��
	scanf_s("%lf", &score);
	if (score < 0)
		printf("����\n");
	else
	{
		if (score < 1.0)
			printf("F\n");
		else if (score >= 1.0 && score < 2.0)
			printf("D\n");
		else if (score < 3.0)
			printf("C\n");
		else if (score < 4.0)
			printf("B\n");
		else if (score < 4.5)
			printf("A\n");
		else if (score == 4.5)
			printf("A+\n");
		else
			printf("����\n");
	}





	return 0;
}