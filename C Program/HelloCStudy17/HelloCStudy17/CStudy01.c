#include<stdio.h>
//�ǽ�4(0728)
//1��) 2D ���� ĳ���� ��ǥ �����ϴ� ����ü ����� (�ϰ� 6,7�� ����)
//1���� ������ 1�� �̻��� ���� ����
struct Game2DPos
{
	int x;
	int y;
}typedef Game2DPos;
int main()
{
	//����ü : struct 
	//����ڰ� ���� ���� �ڷ���
	//ũ�⵵ �پ�
	//�迭�̶��� �ٸ� @@@
	//1���� ������ ���� ������ �Ӽ��� ����
	
	struct Game2DPos p1 = { 10,20 };
	printf("%d\n", sizeof(p1));
	//������ : 8         (����ü�� �迭�� �ƴ�)
	//���� : 4byte�� �� ������ �ΰ� ����
	struct Game2DPos p2 = { .x=10,.y=20 };
	struct Game2DPos p3;
	p3.x = 10;
	p3.y = 20;
	struct Game2DPos p4;
	scanf_s("%d %d", &p4.x, &p4.y);
	printf("������ ��ġ %d %d\n", p4.x, p4.y);
	return 0;
}