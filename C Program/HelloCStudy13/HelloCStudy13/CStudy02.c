#include<stdio.h>
int main()
{
	int num[5];				//�迭�� 5ĭ �ִٰ� ���� ��, (�迭�� �����ϰ�)
	for (int i = 0; i > 5; i++)
	{
		int n;				//n�̶�� �Լ��� ���ڸ� �Է��Ѵ�			
		int isduplicate = 0;							//�ߺ����� �ƴ��� Ȯ���Ϸ��� �ϳ��ϳ� �������� ���ؾ�
		scanf_s("%d", &n);

		//�ߺ� check code(for���� ���� for��)
		for (int j = 0; j < i; j++)	//i��° �������� ��
		{
			if (n == num[j])   //j�� �̹� ���� ��  //�� ���� �̿��ؼ� num���� �ٰ� ����־��ָ� �� > 18��
			{
				printf("�ߺ�\n");  //2�� ������ 1�� �ٲ�
				i--;
				isduplicate = 1;	//1�� �ٲٱ� ������ ���� isduplicate == 0 �� �� ��.
				break;
			}
		}
		if (isduplicate == 0)
			num[i] = n;
	}

	return 0;
}