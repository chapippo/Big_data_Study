#include<stdio.h>
int main()
{
	if (0)
	{
		//1��
		//���丮���� ����غ�����.
		//�Է� : 5
		//��� : 5!=5x4x3x2x1

		/*
		int n;
		scanf_s("%d", &n);
		int sum;
		sum =1;
		for (int i = 1; i <= 6; i++)
		{
			if (i > 6)
				break;
			printf("%d")
		}
		sum *= 1;
		printf("1���� 5������ �� = %d");
		*/

		/*
		printf("�Է� : ");
		int n; 0
		int sum = 0;
		scanf_s("%d", &n);
		sum = 1;
		for (int i = 1; i <= n; i++)
			sum *= i;
		printf("1���� %d������ �� : %d\n", n, sum);
		*/




		printf("�� ���丮��?");
		int fact;
		scanf_s("%d", &fact);									 //ex) fact�� 5���
		printf("%d!=%d", fact, fact);                             //    i�� 4���� 1����
		for (int i = fact - 1; i > 0; i--)                  //��for��
		{
			printf("x%d", i);
		}




		//2��
		//n���� m������ �� (if�� �༭ m�� ������ �����޽��� ����� ���� �ְ�
		//�ƴϸ� �� ������ ���� �ٲ��� ���� �ִ�.
		//������ ���� �ٲ��ִ� �� �غ���..
		//3������ �����޽��� ����ϴ� �� �غ���.

		int n, m;                 //n�� �� Ŭ ��� ���� ���� ���� �ٲ�
		printf("n�� m �Է��ϼ���. ");
		scanf_s("%d %d", &n, &m);
		if (n > m)               //'ù��°�� �ι�°���� �� ũ��'�� ���
		{
			int temp = m;         //temp ���� �ӽð�
			m = n;				  //���⼭ ���� ���� �ٲ���                swap ����@@@@@@@@@
			n = temp;
		}
		int sum = 0;
		for (int i = n; i <= m; i++)
			sum += i;
		printf("%d���� %d������ ���� %d�̴�.\n", n, m, sum);




		//3��
		//n���� m������ �� (��, ¦����) -> n�� m���� Ŭ ��� ���� ó���ϱ�
		printf("n? m? �Է��ϼ���. ");
		scanf_s("%d %d", &n, &m);
		if (n > m)
		{
			printf("ù��°�� �ι�°���� Ŀ�� �� �� ����!\n");
		}
		else
		{
			sum = 0;                     //�ʱ�ȭ �����
			for (int i = n; i < m; i++)
			{
				/*if (i % 2 != 0)
					continue;*/
				if (i % 2 == 0)
					sum += i;                 //������Ű�µ�
			}
			printf("%d���� %d������ ���� %d�̴�.\n", n, m, sum);
		}

		//4��
		//���ڸ� �Է¹ް�, �װ��� ������ ����ϴ� �ڵ带 ¥��, ���� �ݺ��Ѵ�. 
		//�� 0 ������ ���ڸ� �Է¹����� �� �ڵ带 ����


		while (1)
		{
			int input;
			printf("� ���ڸ� ������ �ǰ�? ");
			scanf_s("%d", &input);
			if (input <= 0)
				break;
			printf("������ : %d\n", input * input);

		}
		printf("4�� ����� \n");


		/*
		while (1)
		{
			int input;
			printf("� ���ڸ� ������ �ǰ�? ");
			scanf_s("%d", input);

		}
		printf("�����ϰ� ���� ����? ");
		*/


		//do while�� ����ó�� input�� 0�̾
		//while ������ �������� �� �ص� ������ �� ���� �����Ѵ�.
		//�� ���ѷ����� ���ų� �� ���ų� ó���� ���� ������
		//�޾ƾ� �Ѵٸ� do while�� ����.
		int input = 0;
		do
		{
			printf("���ڸ� �Է��Ͻÿ�. ");				//
			scanf_s("%d", &input);						//
			printf("%d\n", input * input);
		} while (input > 0);

	}

		//5��   @@@@@@@@@@@@@@@
		int N;
		printf("�Է�");
		scanf_s("%d", &N);
		for (int i = 0; i < 2 * N; i++)// �� �κ�
		{
			int onOffSwitch = i;                            //i�� 1�̸� 0, 1 �� �� ����
			for (int j = 0; j < N; j++)						
			{
				if (onOffSwitch % 2 == 0)                                        //���ؿ����� 2�̻󿡼�
					printf("*");
				else
					printf(" ");
				onOffSwitch++;									//�� �� ���� ���
			}
			printf("\n"); // �� �� ����ϰ� �� �� ��� ��
		}

	

	return 0;
}