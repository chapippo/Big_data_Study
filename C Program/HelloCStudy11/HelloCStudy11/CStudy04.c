#include<stdio.h>
extern int a;	//extern �� CTest.c���� �� ���� a
extern int b;	//�ɰ���	�ڵ�	����	������Ʈ	����	��	��ǥ�� ����(Suppression) ����
//����	LNK2001	Ȯ���� �� ���� �ܺ� ��ȣ b	HelloCStudy11	D : \shareFolder\C ����\HelloCStudy11\HelloCStudy11\CStudy03.obj	1

int main()
{
	//b++;	//���⼭ ���� ����. static �پ ���� b�� CTest.c �̿ܿ��� �� ��
			//java, C#, C++�� private ���� ��
	a++;
	printf("%d\n", a);
	up_Print();	  //up_Print�� ���⼭
}

//�۷ι� ������ ��𿡼����� ������ �� �� �ִ�

//�ٵ� static�� ���� ���� �ϳ��� ���� �ȿ����� ���̰� �ٱ����� ������ ������ �� �Ѵ�.

void printNum(int a)	//�Լ��� ����
{
	printf("\n%d", a);
}