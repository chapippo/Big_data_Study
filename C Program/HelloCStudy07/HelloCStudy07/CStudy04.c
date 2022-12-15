#include<stdio.h>
int main()
{
	//    1번문제
	//5개의 숫자를 입력받고 그 중에서 가장 큰 숫자와 작은 숫자를 찾으세요.

	int numbers[5]; //숫자 5개를 관리함, 5칸짜리 배열 int=4, 20바이트짜리						배열 선언!!!
	//참고로 여기에는 기본값으로 
	//쓰레기값이 들어감(무슨 값이 있는지 아직 모름)





	//배열의 길이를 구하는 방법
	int size = sizeof(numbers) / sizeof(int);
	//int size = 50; // 이렇게 중복 선언은 안 됨
	size = 5; // 위에서 '선언'했다면 그 뒤엔 변수명 적기

	//sizeof -> byte 값 구하는 것
	//numbers는 5칸짜리 배열이니까 20
	//왜냐면 int 5개 저장하는 거고
	//int는 1칸당 4byte니까..
	//size = 20/4 = 5
	for (int i = 0; i < size; i++)           //0,1,2,3,4    5번을 돈다
	{
		printf("%d번째 숫자 입력\n", i);
		
		//int num;
		//scanf_s("%d", &num); //num에 값 대입                                    @@@@@ 주소에 접근했다
		//numbers[i] = num; // i번째 칸에다가 직접 대입함
		
		scanf_s("%d", &numbers[i]);   // 안에 넣을 땐 & 붙여야 한다
	}

	//int max, min = 0; 이렇게 쓰면 음수를 넣을 경우 성립하지 않는다             ?????????
	
	int max = numbers[0];       //가장 첫 번째를 최대값이자 최소값으로 가정
	int min = numbers[0];

	for (int i = 1; i < size; i++)         //  int i = 1;   1 이니까 2번째 
	{
		if (max < numbers[i])
		{
			max = numbers[i];
		}
		if (min > numbers[i])
		{
			min = numbers[i];
		}
	}
	printf("최대값 : %d, 최소값 : %d\n", max, min);


	return 0;
}