#include<stdio.h>
int main()
{
	//    1������
	//5���� ���ڸ� �Է¹ް� �� �߿��� ���� ū ���ڿ� ���� ���ڸ� ã������.

	int numbers[5]; //���� 5���� ������, 5ĭ¥�� �迭 int=4, 20����Ʈ¥��						�迭 ����!!!
	//����� ���⿡�� �⺻������ 
	//�����Ⱚ�� ��(���� ���� �ִ��� ���� ��)





	//�迭�� ���̸� ���ϴ� ���
	int size = sizeof(numbers) / sizeof(int);
	//int size = 50; // �̷��� �ߺ� ������ �� ��
	size = 5; // ������ '����'�ߴٸ� �� �ڿ� ������ ����

	//sizeof -> byte �� ���ϴ� ��
	//numbers�� 5ĭ¥�� �迭�̴ϱ� 20
	//�ֳĸ� int 5�� �����ϴ� �Ű�
	//int�� 1ĭ�� 4byte�ϱ�..
	//size = 20/4 = 5
	for (int i = 0; i < size; i++)           //0,1,2,3,4    5���� ����
	{
		printf("%d��° ���� �Է�\n", i);
		
		//int num;
		//scanf_s("%d", &num); //num�� �� ����                                    @@@@@ �ּҿ� �����ߴ�
		//numbers[i] = num; // i��° ĭ���ٰ� ���� ������
		
		scanf_s("%d", &numbers[i]);   // �ȿ� ���� �� & �ٿ��� �Ѵ�
	}

	//int max, min = 0; �̷��� ���� ������ ���� ��� �������� �ʴ´�             ?????????
	
	int max = numbers[0];       //���� ù ��°�� �ִ밪���� �ּҰ����� ����
	int min = numbers[0];

	for (int i = 1; i < size; i++)         //  int i = 1;   1 �̴ϱ� 2��° 
	{
		if (max < numbers[i])
		{
			max = numbers[i];
		}
		if (min > numbers[i])
		{
			min = numbers[i];
		}
	}
	printf("�ִ밪 : %d, �ּҰ� : %d\n", max, min);


	return 0;
}