#include<stdio.h>
#include<stdlib.h>
int main()
{
	//int*�� �����ص� ��
	int* dynamic_arr = (int*)malloc(10 * sizeof(int));	//10ĭ¥�� �迭 �ϼ�

	int size;
	printf("�迭 ������ ���� ");
	scanf_s("%d", &size);
	int* dynamic_arr2 = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
		dynamic_arr2[i] = i + 10; //10�� ���Ƿ� ����  //malloc�� �ʱ�ȭ�� �� �ǹǷ� ���� �־�����
	for (int i = 0; i < size; i++)
		printf("%d\n", dynamic_arr2[i]);
	


	printf("\n");
	//���� �޸𸮸� ����� ��� 2����
	//malloc -> �޸� �ʱ�ȭ�� �� ��
	//calloc -> 0���� �ʱ�ȭ ����

	//10ĭ¥�� ���ڹ迭�� ������µ�, �ȿ� ���� 0���� �ʱ�ȭ �Ǿ� �ִ�.
	int* mynumbers = (int*)calloc(10, sizeof(int)); 
	for (int i = 0; i < 10; i++)
		printf("%d\n", mynumbers[i]);

	//���� �޸𸮴� ���α׷��Ӱ� �������� �Ҵ��� ���̶�
	//�� ��ٸ� free�� ������� ��(��������� ��)
	//�̰� �� ���ָ� �޸� ����(memory leak) ���� ����
	//�� �޸𸮰� ���� ��
	//���� ���α׷�
	free(mynumbers);
	free(dynamic_arr);
	free(dynamic_arr2);

	return 0;
}