#include<stdio.h>
//������ ����
//���� ������ �Լ� �ۿ� ����

int g = 0;

static int s1 = 0; //static Ű���尡 ���� (���� ����)

void upNum(int a, int b) //a,b �� �Ű�����	//�Ű����� = ��������
{						 //�� �Լ��� ������ �����
	static int s2 = 0;	 //�׷� static�� ���� �� � �ɱ�?
	a++;				
	b++;
	s2++;				 //s2 = 0�̶�� ������� ��� �����Ѵ�  //s2�� ���������� �´� , s2�� a,b�� �ٸ��� ���α׷��� �� ���������� ������ 
	g++;													//a,b�� �Լ� ������ ������
	printf("%d %d %d %d\n", a, b, g, s2);
}
int main()
{
	//���� ������ �Լ��� �߰�ȣ �ȿ� ������
	int num = 10;
	if (num > 0)
	{
		int n = 100; //���� n�� num�� ������� ������
		upNum(num, n);										//upNum�� ��� �����ص� 
		upNum(num, n);
		upNum(num, n);
		printf("n=%d, num=%d\n", n, num);
	}
	g++; //���� ������ �Լ� ��𿡼����� �� �� �ִ�
		 //g�� �ٱ��� �ִ�

	printf("g=%d\n", g);
	//upNum(num,n); //���� n�� if�� �ȿ����� ��!!!!! @@@@@
	//printf("n=%d, num=%d\n",n,num);
	return 0;
}