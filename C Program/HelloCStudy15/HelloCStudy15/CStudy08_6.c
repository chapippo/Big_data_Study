//CStudy12

#include<stdio.h>
//4. �Ű������� �޾ƿ� ���ڿ��� ���̸� ����
int length(char* str)
{
	//���ڿ��� ���̸� ���Ϸ���, �� ���ڿ��� '����������' �ݺ����� ����
	//����, ����, Ư������, ������ ��� 1byte
	//�ٵ� �ѱ��̳� ���� ���� 1���ڴ� 2byte
	//���ǹ� üũ�ϱ⵵ ����� ����ó���� ���� �ʴ�.
	
	//�ѱۿ� ����ó�� �غ���!! @@@@@@@
	int len = 0;
	int count = 0;
	int index = 0;
	while (str[len] != '\0')
		len++;
	return len;
}
int main()
{
	printf("%d\n", length("abcd1234!������"));
	return 0;
}
