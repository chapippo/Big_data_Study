#include<stdio.h>
struct Rectangle  //Rectangle Ÿ���� ������ ���� ������� - 2���� ���� ����
{
	int width;		//���Ӱ� ���� �ڷ���
	int height;
}typedef Rectangle;


int area(Rectangle r)
{
	return r.width * r.height;
}

int main()
{
	struct Rectangle r1;
	r1.width = 50;
	r1.height = 10;
	printf("���� : %d\n", r1.width * r1.height);
	
	
	Rectangle r2; //typedef Rectangle �� ������
				  //�տ� �׻� struct�� �پ�� ��!!
	scanf_s("%d %d", &r2.width, &r2.height);
	printf("���� : %d\n", r2.width * r2.height);
	printf("���� : %d\n", area(r2));
	
	Rectangle recs[3];
	recs[0] = r1;
	recs[1] = r2;
	recs[2].width = r1.width;
	recs[2].height = r1.height;								//@@@@@@@@@@@@@@

	/*
	scanf_s("�ʺ� : %d", &r2.width);
	scanf_s("���� : %d", &r2.height);
	printf("���� : %d\n", r2.width * r2.height);
	*/
			
	//r1.width = 4;\
	r1.height = 3;
	


	/*
	Rectangle r3;
	//int area[5];
	int i =	
	for (int i = 1; i <= 5; i++)
	{
		if (max < area(r3))
			max = area(r3);
		else if (area < 0)
	}
	*/



	return 0;
}