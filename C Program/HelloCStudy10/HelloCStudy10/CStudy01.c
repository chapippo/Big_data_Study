#include<stdio.h>
int main()
{
	//scanf�� printf�� �Լ�
	
	int result = printf("Hello"); 
	printf("\n%d\n", result);          //5�� ����, byte���� return��
	int n, m;								//�Լ��� ���
	int a = scanf_s("%d", &n);              //scanf�� �Է� �޴� ���, ��� : �� �Է¹���
	int b = scanf_s("%d %d", &n, &m);		//scanf�� ��ȯ�ϴ� �� = ��ȯ��(��)(=return ��), �Է¹��� ������ ����
				  //----------------		//scanf �ȿ� ������ �Ű�����( = parameter)
	result = printf("%d %d", n, m);
	printf("\nresult = %d, a = %d, b = %d\n", result, a, b);


	return 0;
}