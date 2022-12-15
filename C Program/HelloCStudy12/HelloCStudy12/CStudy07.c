#include<stdio.h>
struct Rectangle  //Rectangle 타입의 변수를 새로 만들었다 - 2개의 값을 가짐
{
	int width;		//새롭게 만든 자료형
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
	printf("넓이 : %d\n", r1.width * r1.height);
	
	
	Rectangle r2; //typedef Rectangle 안 적으면
				  //앞에 항상 struct가 붙어야 함!!
	scanf_s("%d %d", &r2.width, &r2.height);
	printf("넓이 : %d\n", r2.width * r2.height);
	printf("넓이 : %d\n", area(r2));
	
	Rectangle recs[3];
	recs[0] = r1;
	recs[1] = r2;
	recs[2].width = r1.width;
	recs[2].height = r1.height;								//@@@@@@@@@@@@@@

	/*
	scanf_s("너비 : %d", &r2.width);
	scanf_s("높이 : %d", &r2.height);
	printf("넓이 : %d\n", r2.width * r2.height);
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