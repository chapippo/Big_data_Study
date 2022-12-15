#include <stdio.h>
void printMyself() //선언
{
	printf("안녕하세요\n");
	printf("장태연입니다.\n");
	printf("반갑습니다\n");
	printf("저는 학생입니다.\n");

}
int MathPower(int num) { //선언
	if (num <= 0) {
		return 0;
	}

	return num * num;
}
char calcul() {
	printf("첫 번째 숫자 입력해부세요");
	int num1;
	scanf_s("%d", &num1);
	printf("두 번째 숫자 입력해부세요.");
	int num2;
	scanf_s("%d", &num2);
	int result = num2 - num1;

	if (result < 0) return'-';
	else if (result == 0)return '0';
	else return '+';
}
void calcul_sign(int num1, int num2) {

	int result = num2 - num1;
	if (result < 0) 
		printf("\n기호는 -입니다\n");
	
	else if (result == 0)

		printf("\n기호는 0입니다\n");

	else printf("\n기호는 +입니다\n");
	

}



int main(){
	
	int result = MathPower(5);

	printf("5의 제곱은 %d입니다.\n", result);

	printf("3의 제곱은 %d입니다.\n", MathPower(3));

	result = MathPower(-1);

	printf("result = %d\n", result);

	printMyself(); //호출

	printf("calcul의 반환값은: %c", calcul());

	//반환형은 없으나 매개변수가 있다.
	calcul_sign(30, 20);
	
	return 0;
}