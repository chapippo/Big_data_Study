#include<stdio.h>
int main()
{
	if (0)
	{
		//�ݺ����� ���ؼ� �� �� �غ���

		//1. for������ ���ѷ��� �����
		//for (;;)
		//for(int i = 0; i<1;)            //i�� ���� �� �ϴϱ� ���Ѵ�



		system("color a");

		for (int i = 0;; i++)
		{
			//printf_s("a");
			printf("%d\n", i);
			break;
		}



		//2. while���� ��ø�� �ǹǷ� while������ ������ © �� �ִ�.


		//3. �ݺ��� �̿��ؼ� ���ڿ� �ȿ� �ִ�
		//   ����� �ϳ��ϳ� � ���� �ִ�.
		char name[100];
		printf("�̸��� ����?");
		gets(name);
		for (int i = 0; name[i] != '\0'; i++)          // '\0' = NULL
			printf("%c", name[i]);

	}
	if (0)
	{
		//1��
		//���� a�� b�� c�� ���� �Է¹ް�, a���� b������ ���� ���ϵ�, c�� ��� �κ��� �����ϰ� ���� ���� ��
		int a, b, c;
		printf("a�� b, c�� ���� �Է��ϼ���. ");
		scanf_s("%d %d %d", &a, &b, &c);
		//int c;
		//printf("c�� ����? ");
		//scanf_s("%d", &c);
		int sum = 0;
		for (int i = a; i <= b; i++)       //a���� �����ؼ� b ���ϱ���
		{
			if (i % c == 0)
				continue;
			sum += i;                       //�������� ���ؼ��� ���Ѵ�
		}
		//printf("%d���� %d������ �� �� %d�� ��� �κ��� ������ ���� %d�̴�.\n", a, b, c, sum);
		printf("sum = %d\n", sum);
	}


	//2��
	//���� ����� 3kg/5kg�� ��µ�, �ǵ����̸� �ָӴ� ���ڸ� �ٿ��� ��ƿ��� �ʹ�.
	//�ٵ� 4kg ���� �� 3kg�� 5kg�� ��� �� �Ұ����ϴ� -1 ���

	//5kg�� ���������� ���� üũ
	//�װɷ� �������� �� �ָӴ� ������� ����ϰ� ��
	/*
	printf("���� ������ �䱸�ϴ� ���� ����? ");
	int n;
	scanf_s("%d", &n);
	for (int sugar = 0; n > )
	*/


	int Sugar;
	printf("���� �� kg?");
	scanf_s("%d", &Sugar);
	int pack = 0;  // �ָӴ� ��
	while (1)
	{
		if (Sugar % 5 == 0)
		{
			pack += Sugar / 5;
			printf("%d����\n", pack);
			break;
		}
		Sugar -= 3;
		pack++;  //3kg �ָӴ� �ϳ� ����
		if(Sugar <0)
		{
			printf("-1\n");
			break;
		}
	}



	return 0;
}