#include<stdio.h>
int main()
{
	//1. ���ڸ� �Է¹ް� �Ʒ��� ���� ����Ѵ�.
	//123 = > 2�� 3��

	printf("�� ���ΰ���?(1��)");
	int sec;
	scanf_s("%d", &sec);
	//123 -> 2��3��
	//���� ���� �� ������(/), �ʸ� ���� �� ������(%)
	printf("%d�� %d��\n", sec / 60, sec % 60);


	//2. 2x + b ��� ������ ���� ��,
	//x�� b�� �Է��Ͽ� �ظ� ���Ͽ���
	

	printf("2x+b�� �ش�?(2��)\n");
	printf("x��?");
	int x, b;//���� ���� x�� b����
	scanf_s("%d", &x);
	printf("b��?");
	scanf_s("%d", &b);
	printf("2x+b=%d\n", (2 * x) + b);
	


	//3. �ڽ��� ��� ����(+-0 �� �ϳ�), mbti, ������(RH + �� - �� �Է�),
	//Ű, ���� �̷� �������� �Է¹ް�,,,,,,,,,, ����غ���.

	//���� �����% c�Դϴ�.�� mbti��% s�̰�, ��������% s�Դϴ�.
	//�� Ű�� % .f�̸�, ���̴�% d���Դϴ�.
	
	//ex) ���� ����� + �Դϴ�.�� mbti�� istp�̰�, �������� ab rh + �Դϴ�.
	//�� Ű�� 173.12�̸�, ���̴� 34���Դϴ�.

	printf("�����?");
	rewind(stdin);          //char �Է¹ޱ� ���̹Ƿ� rewind, ������ �̷����� �Է��� �޾ұ� ����(���� �Է� �������� �Ű� �� �ᵵ ��)
	//char feel = getchar();//getchar
	char feel;
	scanf_s("%c", &feel, 1);
	printf("mbti?");
	rewind(stdin);
	char mbti[5];
	scanf_s("%s", mbti, sizeof(mbti));
	printf("������?");
	rewind(stdin);
	char bType[10];
	gets(bType);

	//double Ÿ�� ������ ���� ���� �� lf�� �ϱ�
	double cm;
	printf("Ű��?");
	scanf_s("%lf", &cm);

	printf("���̴�?");
	int age;
	scanf_s("%d", &age);

	printf("���� ����� %c�Դϴ�. �� mbti�� %s�Դϴ�. �������� %s�Դϴ�.��Ű�� %.2lf�̸�, ���̴� %d���Դϴ�.\n", feel, mbti, bType, cm, age);




	
	//4. ���� a�� ���� �����ؼ� ���� ���� �ظ� ���϶�
	//(x + a)(x + b) = > x ^ 2 + (a + b)x + (a * b)
	printf("x ^ 2 + (a + b)x + (a * b)�� �ش�?(4��)");





	//5. �� ���� ���ڸ� �Է¹޴´�.(�� �� 3�ڸ�)
	//1) ù��° ���� ���ϱ� �ι�° ������ 1�� �ڸ� ��(472 * 5)
	//2) ù��° ���� ���ϱ� �ι�° ������ 10�� �ڸ� ��(472 * 8)
	//3) ù��° ���� ���ϱ� �ι�° ������ 100�� �ڸ� ��(472 * 3)
	//4) ù��° ���� ���ϱ� �ι�° ����(472 * 385)
	//ex) ù��° ���� : 472
	//�ι�° ���� : 385
	//��� ��� : 2360, 3776, 1416, 181720

	


	return 0;
}