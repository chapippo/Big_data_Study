#include<stdio.h>
void Swap(int* a, int* b, int* c)
{
	int temp = *c;
	*c = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a, b, c;
	int aa2, bb2, cc2;
	printf("�� ���� ���ڸ� �Է��Ͻÿ�. ");
	scanf_s("%d %d %d", &a, &b, &c);	
	aa2 = a;
	bb2 = b;
	cc2 = c;
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	Swap(&a, &b, &c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	//�������� �غ���
	Swap(&a, &b, &c);
	Swap(&a, &b, &c);
	printf("%d %d %d\n", a, b, c);

	//do while�� �� �� ��쿣
	//�� �� �������� �����ϰ� ����
	//�� ������ �ݺ������� ���������� ���ƿ� ���θ� üũ ����

	//do while�� �� ����
	//ó���� �翬�� a,b,c�� aa2,bb2,cc2�� ����
	//�Ȱ���
	//�׷��� �׳� while���� �ٷ� ����
	//������ do-while�� ���� while ������ ���
	//������ �� ���� ������
	//�׸��� �� �������� ���ǿ� ���� �ݺ����� ����
	do
	{
		Swap(&a, &b, &c);
		printf("a=%d b=%d c=%d\n", a, b, c);

	} while (aa2 != a); //&& bb2 != b && cc2 != c);
	printf("%d %d %d\n", a, b, c);

	/*
	for (int i = 0; i < 3; i++)
	{
		Swap(&a, &b, &c);
		printf("a = %d, b = %d, c = %d\n", a, b, c);
		/*
		if(i == 3)
		{
			printf("a = %d, b = %d, c = %d\n", a, b, c);
		}
		else
		{
			break;
		}
		
	}
	*/
	return 0;
}