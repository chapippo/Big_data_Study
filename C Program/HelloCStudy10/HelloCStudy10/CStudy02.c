#include<stdio.h>
void printMySelf()			//(함수)선언
{
	printf("안녕하세요.\n");
	printf("이동준입니다.\n");
	printf("반갑습니다.\n");
	printf("저는 프로그래밍 교사입니다.\n");
}

//제곱은 제곱인데, 0이나 음수면 그냥 0 반환함
int MathPower(int num) //선언
{
	if (num <= 0)
		return 0;

	return num * num;
}

char calcul()		//두 개의 숫자를 함수 안에서 입력받음,  
					//매개변수를 입력 받는 게 아니고 함수 안에서 입력을 받는다
{					//그것에 대한 연산 결과에 따라 -,0,+ 글자 반환함

					//3번 ( 반환형은 있으나 매개변수가 없는 함수형 )
	printf("첫 번재 숫자 입력해보세요.");
	int num1;
	scanf_s("%d", &num1);
	printf("두 번재 숫자 입력해보세요.");
	int num2;
	scanf_s("%d", &num2);
	int result = num2 - num1;
	if (result < 0)
		return '-';
	else if (result == 0)
		return '0';
	else
		return '+';
}

void calcul_sign(int num1, int num2)	//4번
{
	int result = num2 - num1; //반환형이 없으니 출력을 바로 해줘야
	if (result < 0)
		printf("기호는 -입니다.\n");
	else if (result == 0)
		printf("기호는 0입니다.\n");
	else
		printf("기호는 +입니다.\n");
}

int main()  //반환형이 있다는 건 result 같은 게 있는 것
{
	printMySelf();			//호출 //printMySelf 같은 경우는 
				//값을 주는 것도, 받는 것도 아니고 그냥 출력만
	int result = MathPower(5);
	printf("5의 제곱은 %d입니다.\n", result);

	printf("3의 제곱은 %d입니다.\n", MathPower(3));

	result = MathPower(-7);
	printf("result = %d\n", result);

	char sign = calcul();							//3번
	printf("기호는 %c입니다.\n", sign);


	int n1, n2;		//입력을 main에서 하고 있다.. //여기서는 값을 반환해주는 건 없고 출력만  //4번
	printf("첫번재 수?");
	scanf_s("%d", &n1);
	printf("두번째 수?");
	scanf_s("%d", &n2);
	calcul_sign(n1, n2); //n1, n2 받아서 계산해서 출력해줌


	calcul_sign(30, 30); //숫자를 넣어서 바로 출력해도 됨
	

	//함수의 이름을 잘 지어야
	//모니터 화면 하나에 잘 들어오게
	//이 코드 이렇게 줄일 수 있을 것 같은데??? 고민必
	

	return 0;
}