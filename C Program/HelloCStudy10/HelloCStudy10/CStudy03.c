#include<stdio.h>
#include"mytest.h"
#include"yourtest.h"
void test(); //����(��ȯ�� �Ű����� ����)     //@�Լ��� ���� 2��



int main()
{
	test();
	mytest(); // mytest.h���� �о�� �Լ�  //��������� ���� CStudy�� ���� ���� �� �ִ�
										   //������Ͽ� ������ �Ǵ�..
	
}										  

void test() //����
{
	printf("�Լ� �׽�Ʈ.");
	return;
}

//������ ���� ���� ���� �����ݷ��� ���̰� 
//���Ǹ� ���� ���� �����ݷ� X