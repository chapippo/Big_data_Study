#include<stdio.h>
int main()
{
	//������ = ������ �ּ� Ȥ�� ��ġ
	int a = 10;
	int* ptr_a = &a;        //&�� ��ǻ�� �޸𸮻� ��ġ
	(*ptr_a)++;             //ptr_a�� a�� ����Ű�µ� ptr �տ��ٰ� * ���̸� //�̰� �ٽ� @@@@@ 
	printf("a=%d\n", a); //11							//(�̰� ���ʿ� �ִ� ���� ����Ŵ,++�̴� 11)

	a++;
	printf("ptr_a�� ����Ű�� ���� �� : %d\n", *ptr_a); //12
	printf("ptr_a : %d\n", ptr_a);//�̰� �׳� �ּ� (��) 
	printf("a=%d\n", a); //12

	a = 12;
	int b = a;
	b++;
	printf("a=%d\n", a);            // a�� b�� ���� ����
	printf("b=%d, a=%d\n", b, a);   // b�� a�� ���� ���������� b�� �����ȴٰ� a�� �������� ����
									//


	return 0;
}