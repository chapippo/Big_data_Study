#include<stdio.h>
int main()
{
	//�迭
	//�л� 100���� ���̸� �����ϴ� �����?

	//1. ������ 100�� �����.
	//int student1���� �����ؼ�
	//int student100���� �����.
	
	//2. �迭�� �̿��Ѵ�.
	int stu_numbers[100];
	for (int i = 1; i <= 100; i++)
		stu_numbers[i = 1] = i;
	//�迭�� ���� ù��°�� [0]���� ����.
	// �׸��� ���� ���� =1�� ����.
	//���⼱ ���̰� 100�̴ϱ� [99]��°�� ��

	//ó���� �迭 ���� �� ���� �Ҵ絵 ����
	int numbers[5] = { 10,20,30,40,50 };
	printf("%d %d %d %d %d\n",
		numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

	//stu_numbers�� 100ĭ¥�� �޸��� ������
	//�� stu_numbers�� ������
	//������ ���ϸ� ������ ���
	//const int a �� ���� ������ �ϰ�
	//const double b�� �Ǽ� ������ �ϵ���
	//stu_numbers�� �迭�ε�, �迭�� ������ ������ ��
	//�� �迭�� �� �� �޸� ��ġ �����ϸ� �� ������ 
	//�� ��ġ�� ����Ŵ
	int* ptr = stu_numbers;

	printf("\n%d\n", stu_numbers[50]); //���� 51
	ptr[50] = 1000;

	printf("\n%d\n", stu_numbers[50]); //�ٵ� 1000���� �ٲ�

	printf("[2]��°(����°) �� �����ϱ�\n");
	scanf_s("%d", ptr + 2);
	printf("\n%d\n", stu_numbers[2]);
	printf("\n%d\n", ptr[2]);

	printf("\n%d %d %d %d\n", ptr[2], *(ptr + 2), stu_numbers[2],
		*(stu_numbers + 2));

	int my_nums[5] = { 50,60,70,80,90 };  //my_nums�� ���� ����Ű�� �� �ƴ϶� ��ġ�� ����Ű�� �� @@@@@@@@@@@
	ptr = my_nums;
	printf("%d", ptr[2]); //70

	//stu_numbers = my_nums; //������ ����� �� �ȴ�.
	//stu_numbers�� �� �� ����ų �� ����.


	return 0;
}