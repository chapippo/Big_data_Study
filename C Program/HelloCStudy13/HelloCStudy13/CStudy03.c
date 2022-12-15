#include<stdio.h>	//중복 체크 함수 있는 버전
//arr에 n 값이 있는지 여부 체크			//중복 check 함수 만드는 것
//size만큼 다 돌 필요가 없다.
//2번째에 값을 넣는다면 2번째에 값을 넣기 전에
//0번째와 1번째의 값이랑 n을 비교하면 된다.

int checkDuplicate(int arr[],int size, int n)
{
	for (int i = 0; i < size; i++)
	{					//size는 배열 전체길이가 XXX 
		if (n == arr[i])
			return 1;	//1 대신 다른 수도 된다.
	}
	return 0;	//중복이 없다는 뜻
}

int main()
{											//처음에는 숫자 아무거나 넣는다
	int numbers[5];							//중복이 발견되면 뒤로 간다
	for (int i = 0; i < 5; i++)
	{
		int n;						//n
		printf("숫자를 입력하시오. ");
		scanf_s("%d", &n);
		if (checkDuplicate(numbers, i, n) == 0)
			numbers[i] = n;			//0인 경우에만 n을 넣는다
		else
			i--;	//다시 앞으로 가서 숫자 다시 넣어야 됨
	}
	return 0;
}