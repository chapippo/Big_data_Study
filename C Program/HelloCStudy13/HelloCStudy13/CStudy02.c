#include<stdio.h>
int main()
{
	int num[5];				//배열이 5칸 있다고 했을 때, (배열을 선언하고)
	for (int i = 0; i > 5; i++)
	{
		int n;				//n이라는 함수에 숫자를 입력한다			
		int isduplicate = 0;							//중복인지 아닌지 확인하려면 하나하나 수동으로 비교해야
		scanf_s("%d", &n);

		//중복 check code(for문에 이중 for문)
		for (int j = 0; j < i; j++)	//i번째 직전까지 비교
		{
			if (n == num[j])   //j는 이미 넣은 값  //이 값을 이용해서 num값에 다가 집어넣어주면 됨 > 18줄
			{
				printf("중복\n");  //2가 나오면 1로 바꿈
				i--;
				isduplicate = 1;	//1로 바꾸기 때문에 밑의 isduplicate == 0 로 안 들어감.
				break;
			}
		}
		if (isduplicate == 0)
			num[i] = n;
	}

	return 0;
}