#include<stdio.h>
int main()
{
	//포인터
	int a = 10;
	int* ptr_a = &a;
	//다중 포인터
	int* *pp_aa = &ptr_a; // 주소값의 주소를 저장              //크게 쓰이진 않는다

	//배열
	int numbers[5] = { 1,20,50,30,4 };
	//다차원 배열 = 다중 포인터에서 파생
	int multi_dim[3][2]  //2차원 배열. (3행 2열, 이라고 표기하면 안 되긴 함)
		= {
			{3,4},{1,11},{99,22}
	};

	//305호 교실 학생들의 나이(교실에 5명 있다고 가정)
	int room[5] = { 30,22,25,29,27 };
	//3층에 교실이 3개가 있고, 각 교실에 5명씩 있을 때 거기 있는 학생들의 나이
	int r_room[3][5];

	//int** rr = r_room;

	for (int i = 0; i < 3; i++)      // 반복문 안에 반복문 넣어서 이차원 배열에 접근할 수 있따
	{
		for (int j = 0; j < 5; j++)
			r_room[i][j] = i + j + 10;        //10은 예시로 넣은 값
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%d\n", r_room[i][j]);
	}


	return 0;
}