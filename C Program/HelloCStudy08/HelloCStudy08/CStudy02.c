#include<stdio.h>
#define MAX 1024 // ��ũ�� ��� ����

//�̰ɷ� �迭�� ũ�� ���� �� �ִ�.
//��, �����δ� ũ�� ���� �� ��
//�Ϸ��� malloc, calloc �̷� �� ��� ��

int main()
{
	//   <<< ���ĺ� ���� ���� ��ġ >>>
	char input[MAX] = { NULL };
	int index = 0;
	printf("���� �Է��ϼ���. ");
	gets(input);
	int charAlpha[26] = { 0 };  //-1�� ä��� �� �� ������ �� �ִ�. �غ��� // 0���� ����
	for (int i = 0; input[i] != NULL; i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
			input[i] += ('a' - 'A');
		if (input[i] < 'a' || input[i]>'z')                    //�ǵ��� ���� ���� �����ߴ��� üũ�ؾ� �Ǵµ� �� �ٿ� else�� ������ �빮�ڰ� �ҹ��ڷ� �ٲ�� �� ���� �׳� �ǳʶ�
			continue; // �����ڸ� ���� �������� �� ��ŵ								//�׷��� else�� ���� ��      //�빮�ڸ� �ҹ��ڷ� '�ٲٰ�' if if else �� , if else if else X
		else
		{
			index = input[i] - 'a';
			charAlpha[index];
			
			if (charAlpha[input[i] - 'a'] == 0) // ���� �����     0�̶�� �ٸ� ���� �� �־��ְ�
				charAlpha[input[i] - 'a'] = i + 1;                 
			
												//ex) abca ��� 4��° a�� ���� �����Ŀ� �̹� 1�� �������Ƿ�
			//ù��° ����� 0�� �ƴ� 1�־�� �ϹǷ�							  // ó�� ���常 ����!!!!! ������ ����
			//�׻� i+1�� �ִ´�.										@@@@@@@@@@@@@@@
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (charAlpha[i] != 0)
			printf("%c�� %d��° ó�� ����\n", 'a' + i, charAlpha[i]);
	}

	return 0;
}