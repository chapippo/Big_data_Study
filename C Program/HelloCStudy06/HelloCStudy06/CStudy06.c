#include<stdio.h>
int main()
{
	int numbers[6] = { 0, }; //6���� ���ڸ� ���� //1�� ���� 1,0,0,0,0,0   //�� ������ ������ ������ ���� ���ִ�.
	//{0,}; <- 0���� �ʱ�ȭ

	char a = 'A';
	char b = '��'; //'��'�� 1����Ʈ�� �ƴ�, '��'�� ǥ���Ϸ��� �� ĭ �̻��� �ʿ�

	//char 1����Ʈ 
	//int 4����Ʈ 
	//double 8����Ʈ 
	//long long 8����Ʈ



	//�ΰ��� �� �־��ָ� ������� �� �̻��� ������ ���� ���.
	char mbti[5] = "ISTP"; //5���� ����, �� ������ ���ڴ� '\0'(��)
	
	int* ptr_n = numbers;
	char* m = mbti;


	*(m + 2) = 'E';// mbti[2] = 'E'; // m[2]='E'; // +2�� ������ "ISEP"�� ��µ�, ���������� ��ĭ, ��ĭ �ڿ�

	//*m = 'E';  (���� ù��° ���ڸ� �ٲٴ� ��)								@@@@@@@@@@@@@@
	*ptr_n = 100;  // numbers[0] = 100; //ptr_n[0] = 100;

	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2],			//~ĭ�� numbers[2] �̷� �͵��� �ε������ �θ���
		numbers[3], numbers[4], numbers[5]);									//numbers�� ����Ϸ��� �̷��� ����

	printf("%s", mbti); //ISTP -> ESTP

	//����� �迭�� �� �ִ� ��� 2��°
	//1��°�� ptr+1 �̷������� �־���

	numbers[1] = 100;
	scanf_s("%d", &numbers[1]); //2��° ��� -> �̰� �� �� �� ��        , �ε��� ���� @@@@@@@@
	scanf_s("%d", numbers + 2); //1��° ��� (�� ĭ �ڴϱ� �� ��°)              @@@@@@@@@@@@@@@@@@@
	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2],
		numbers[3], numbers[4], numbers[5]);

	rewind(stdin);
	gets(m); //���ڿ� �Էµ� ��.            //gets������ ����ģ �ɷ� ������ ������ rewind �����
	printf("%s", mbti); //ISTP -> ESTP
	printf("%s", m); //ISTP -> ESTP




	//char �迭 ��� char* �ϸ�
	//gets �Է��� �� ��...
	//�� �������� �� �� ������ char �迭�̶� �׷�..

	printf("\ntest\n");
	char* char_test = "aa";   //�̷��� ���� �Ǹ� ���̸� ���� gets�� �Է��� �� ��,������ �Ǵµ�
	gets(char_test);					//���̸� ���� ��� �ΰ����� �𸣴ϱ� gets ���X
	printf("%s", char_test);




	return 0;
}