#include<stdio.h>
void swap(int* pa, int* pb)		//�Լ��� ���ؼ� ���ο� �ִ� ���� �ٲ��ش�
{								//no_changeValue�ʹ� �ٸ��� ���� ������ �ش� @@@@@
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{
	int a = 3;						//2,3���� ������ 2���� ���� ���� ���� �Է�����
	int b = 5;
	swap(&a, &b);
	printf("%d %d", a, b); //5 3 ���
	return 0;
}