#include<stdio.h>
int main()
{
	//6��
	//�Է��� ���ڰ� ¦����� "¦!" �Է��� ���ڰ� Ȧ����� "Ȧ!" ��, ������ ��� ������ "����!!!"��� ����ϱ�

	int num;
	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &num);
	if (num < 0)
	{
		printf("����!!!\n");
	}
	else if (num == 0)
	{
		printf("num�� 0!!!\n");            //Ȯ���ϰ� �ϱ� ���ؼ� �߰�
	}
	else
	{
		if (num % 2 == 0)
			printf("¦!\n");
		else
			printf("Ȧ!\n");
	}
	
	///////////

	if (num < 0)
		printf("����!\n");
	else if (num == 0)
		printf("0\n");
	else if (num > 0 && num % 2 == 0)
		printf("¦!\n");
	else if (num > 0 && num % 2 != 0)
		printf("Ȧ!\n");                                //else if�� �뵵 @@@@@@@




	//7��
	//������ 5�� ���
	/*int n;
	scanf_s("% d", &n);
	for (int n = 1; n <= 9, n++)
		printf("%d*5=%d", n, n * 5);*/

	printf("������ 5�� ����ϱ�\n");
	for (int i = 1; i < 10; i++)                      //������ ������ �ӽú���(for�� ���ʿ����� ���� ����(int)) @@@@@@@@@
		printf("5 x %d = %d\n", i, 5 * i);            //10 �̸��̶�� �� ���̸� ������ ������ ����
													  //����� �ִ� ������ �ٽ�, �����̸� ���� �� ��



	//8��
	//������ n�� ���
	printf("�� ��?\n");
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < 10; i++)
		printf("%d x %d = %d\n", n, i, n * i);


	//9��
	//������ 2�ܺ��� 9�ܱ��� ���
	for (int n = 2; n < 10; n++)                    //�� �� n���� �ٱ����� ���δ� ����
	{
		for (int i = 1; i < 10; i++)
			printf("%d x %d = %d\n", n, i, n * i);
	}


	//10��
	//
	int sum = 0;
	printf("����� ���ұ��?\n");
	scanf_s("%d", &n);
	printf("1");                                    //1+2+... ���� ó�� 1
	sum = 1;
	for (int i = 2; i <= n; i++)                                               
	{
		sum += i;          // �� ����        
		printf("+%d", i);  // �޽��� ���            2+3+...�� ����
	}
	printf("=%d\n", sum);

	
	return 0;
}