#include<stdio.h>

struct Rectangle
{
	int width;
	int height;
}typedef Rectangle; // ���� �̸��� ���� �������
//���ǵ� �̸����� �θ��ų�
//���� �̸����� �θ� �� �ִ�.

int main()
{
	Rectangle recs[5];
	for (int i = 0; i < 5; i++)
	{
		printf("�簢���� width�� height �Է��ϱ� ");
		scanf_s("%d %d", &recs[i].width, &recs[i].height);
	}

	Rectangle maxRec = recs[0]; //���� ù ��°�� ũ�ٰ� ����
	for (int i = 0; i < 5; i++) //���� int i = 1.. ���� ù��°�� ũ�� ������ int i =0���� ?? @@@@@@@@@@@@@@@
	{

		//����ó�� ���� ��쿣 if���� �����
		if (recs[i].width < 0 || recs[i].height < 0)
			continue;

		int area = recs[i].width * recs[i].height;
		int maxAAArea = maxRec.width * maxRec.height;
		if (maxAAArea < area)		//���̰� ���� ū �ɷ� ��ü
			maxRec = recs[i];
	}

	//2���� ���� ����ó��2 (����ó�� ���� ��쿣 if���� �����)
	if (maxRec.width >= 0 && maxRec.height >= 0)	//�� �� 0�̻��̿������� ��� ��Ű�ڴ�
	{
		printf("���� ���� �簢���� width : %d, height : %d\n", maxRec.width, maxRec.height);
	}



	return 0;
}