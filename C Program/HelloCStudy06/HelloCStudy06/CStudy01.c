#include<stdio.h>
int main()
{
	int a = 10;
	// lld = long long Ÿ��
	// &a = a�� �ּ� (���� a�� �޸� �󿡼� ��� ��ġ�� �ִ��� ǥ������)
	printf("%d, %lld", a, &a);     //lld�� �־�� �׻� ����� ����

	// &a ���� ���α׷� ������ ������ ���� �ٲ�
	// �� ���α׷��� ������ a�� �������
	// ������ �ٽ� �޸� �Ҵ��ؾ� �ϴµ� 
	// �׶��׶� �ٸ� ���� �Ҵ���
	// �ֳĸ� �ش� ��ġ�� ��ǻ�Ͱ� �̹� ���� ���� ���� �ִ�.


	//������ : ������ �ּҸ� �����ϰ�                       �����Ͷ�� �༮�� �ּ�'��' �ٷ��.
	//������ Ÿ�Ժ��� �پ��� �����Ͱ� �ִ�.         ��ġ�� ������ �� �ִ�
	int* ptr_a = &a;       //a�� ���� ������ ���� ����
	int * ptr_a2 = &a;
	int *ptr_a3 = &a;



	//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



	int aa = 100; //���� ����
	int* ptr_aa = &aa; //���� ������ �ּҸ� ����

	scanf_s("%d", ptr_aa);
	scanf_s("aa=%d\n", aa);

	scanf_s("%d", &aa);

	

	//ptr_aa��� �����Ͱ� ����Ű�� �� ��ġ��
	//����
	//�� �༮�� ���� �ٲ۴�.
	*ptr_aa = 0;
	printf("%d", *ptr_aa);
	//�����Ͱ� ����Ű�� ��ġ�� ����
	//�� ��ġ�� ����Ǿ� �ִ� ���� �����ش�. 



	double b = 3.14;
	double* b_ptr = &b;





	char c = 'A';
	char* ptr_c = &c;  //ptr_c�� ���� A�� �����ϴ� ���� c�� ��ġ�� ����
	char* name = "�̵���";  //name�� ������ ����Ŵ
							//"�̵���"��� ����(=7byte)�� �����ϴ� �޸��� ��ġ�� ����Ŵ
							//�ֵ���ǥ(") �ȿ� ���� ������
							//NULL(\0)���� ������ �뷮�� �Ҵ��

	
	//ptr_c���� �̻��� ���� ������ ����
	//ptr_c�� ����A�� �����ϴ� c�� ����Ű����
	//��ǻ�� �޸𸮿� c ������ NULL�� ����
	//�ȿ��� ��
	//�׷��� %s�� NULL�� �� ������ �� ����ع���

	//name�� "�̵���"�� ����Ű��
	//�� "�̵���"���� \0(NULL)�� ��� �־
	//�̵��ظ� �����
	
	//%s�� ����� �� ���� NULL�� ���� �־��
	//�� ������ ���� �� �� �ִ�.

	printf("%c %s %s", c, ptr_c, name);


	char myname[100] = "��ο�";
	//myname�� 99byte ���ڸ� ������ �� �ִ� ��
	//"��ο�" �̷��� ������
	//��ο�+\0�� �ڵ����� ����� ����

	printf("\n%s", myname);    //myname�� �����ϴ� ��ġ

	return 0;
}