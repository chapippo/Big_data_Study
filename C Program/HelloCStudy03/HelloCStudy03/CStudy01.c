#include<stdio.h>
#include<stdlib.h>//atoi�� ���� ����. �Ĺݺο� �ʿ���
int main()
{

	if (0)
	{

		int x, b;
		printf("x�� b��? ");
		scanf_s("%d %d", &x, &b);

		int a;
		printf("a�� ?");
		scanf_s("%d", &a);

		printf("(%d+%d)(%d+%d)=%d", x, a, x, b, (x + a) * (x + b));


		//4������
		//���� a�� ���� �����ؼ� ���� ���� �ظ� ���϶�
		//(x + a)(x + b) = > x ^ 2 + (a + b)x + (a * b)

		int x, b;
		printf("x�� b��?\n");
		                                  //2�� �̻��� �� �Է��ϱ�
		scanf_s("%d %d", &x, &b);
		                                 //�� �ٿ� 2���� ���� �� �Էµ�

		int a;
		printf("a��?");
		scanf_s("%d", &a);

		                      //(x+a)(x+b) = x^2 + (a+b)x + (a*b)
		printf("(%d+%d)(%d+%d)=%d\n", x, a, x, b, (x + a) * (x + b));
		printf("x^2+(a+b)x+(a*b)=%d\n", (x * x) + ((a + b) * x) + (a * b));



		//5������
		/*1) ù��° ���� ���ϱ� �ι�° ������ 1�� �ڸ� ��(472*5)
		  2) ù��° ���� ���ϱ� �ι�° ������ 10�� �ڸ� ��(472 * 8)
		  3) ù��° ���� ���ϱ� �ι�° ������ 100�� �ڸ� ��(472 * 3)
		  4) ù��° ���� ���ϱ� �ι�° ����(472 * 385)*/
		printf("ù��°�� �ι�° ���ڸ� �Է��ϼ���.");
		int num1, num2;
		//num1 = 10;
		scanf_s("%d,%d", &num1, &num2);
		//scanf_s���� ���⸦ �̿��ؼ� ���� �� �Է� ����������, �޸�(,)�� �̿��ص� �ȴ�.

		printf("%d\n", num1 * (num2 % 10)); //472*5
		printf("%d\n", num1 * ((num2 / 10) % 10)); //472*8 (�Ҽ��� ����)
		printf("%d\n", num1 * (num2 / 100)); // 472*3
		printf("%d\n", num1 * num2);


		//�ι�° ���
		//�ƽ�Ű�ڵ� �̿��ϴ� ���

		printf("�ι�° ���ڸ� �ٽ� �Է��غ���.");
		char number[5]; //���� �迭, ���ڸ� ���� 5���� �ְڴ�
		rewind(stdin);  //54�� ���� ���ڸ� �޾Ҿ rewind(stdin)
		gets(number);


		printf("%d\c", number[0]);  //���ڷ� ��� (�ƽ�Ű�ڵ�� ���ڸ� ����ϰ� �ʹ�)
		printf("%c\c", number[0]);  //���ڷ� ��� (���� �״�� ����ϰ� �ʹ�)


		printf("%d,%d,%d,%d\n",
			num1 * (number[2] - '0'),
			num1 * (number[1] - '0'),  //0 �� ����?? '8'=56�̶� -48�� ����� ���� 8�� �Ǵϱ�
			num1 * (number[0] - '0'),
			num1 * atoi(number));
		//atio -> ���ڿ��� ���ڷ� �ٲ��ִ� ���


	}
		
	
		//4������
		//���� a�� ���� �����ؼ� ���� ���� �ظ� ���϶�
		//(x + a)(x + b) = > x ^ 2 + (a + b)x + (a * b)


	int x, b;
	printf("x�� b��?\n");
	//2�� �̻��� �� �Է��ϱ�
	scanf_s("%d %d", &x, &b);
	//�� �ٿ� 2���� ���� �� �Էµ�

	int a;
	printf("a��?");
	scanf_s("%d", &a);

	//(x+a)(x+b) = x^2 + (a+b)x + (a*b)
	printf("(%d+%d)(%d+%d)=%d\n", x, a, x, b, (x + a) * (x + b));
	printf("x^2+(a+b)x+(a*b)=%d\n", (x * x) + ((a + b) * x) + (a * b));




	return 0;
}