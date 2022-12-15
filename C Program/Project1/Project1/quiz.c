#include <stdio.h>
#include <Windows.h>
int first_quiz(int num1, int num2, int num3) {
	
	int sum = 0;
	
	for (int i = num1; i <= num2; i++) {
		if (i % num3 != 0) {
			sum += i;
		}
	}

	return sum;
}
int second_quiz(sec) {
	int h;
	int m;

	if (sec > 3600) {
		printf("3600보다 큽니다 error\n");
	}
	else {
		h = sec / 60;
		m = sec % 60;

		printf("%d분 %d초\n", h, m);
		
	}
	
	return m;
}
void third_quiz() {

	
	system("color 3E");
}
int five_quiz() {
	int sum = 0;
	char c;
	for (int i = 1; i <= 100; i++) {
		sum += i;
		c = i != 100 ? '+' : NULL;
		printf("%d%c", i, c);
	}
	printf("\n");
	printf("total=%d", sum);
}
int sixth_quiz(a, b) {
	int sum = 1;
	for(int i = a; i <= b; i++) {
		sum = sum * i;
		printf("%d", i);
		
		if (i != b) {
			printf("x");
		}
		
	}
	
	return sum;
}
char seven(int a, int b, char c7) {
	int sum;
	if (c7 == '*') {
		sum = 1;
	}
	else {
		sum = 0;
	}
	for (int i = a; i <= b; i++) {
		
		if (c7 == '+') {
			sum += i;

		}
		else if (c7 == '*') {
			sum *= i;
		}
		else if (c7 == '-') {
			printf("에러입니다.");
			break;
		}

	}

	return sum;
}
int eight_quiz(int number) {
	int sum = 1;
	for (int i = 1; i <= number; i++) {
		sum *= i;
	}
	return sum;

}

int main() {
	
	int a, b, c;
	printf("첫 번째 문제 a, b, c입력\n");
	scanf_s("%d %d %d", &a, &b, &c);
	int result1 = first_quiz(a, b, c);
	printf("%d", result1);



	int sec;
	printf("\n두 번째 문제 sec입력\n");
	scanf_s("%d", &sec);
	int result2 = second_quiz(sec);
	printf("2번문제 반환값은 %d입니다\n", result2);

	
	third_quiz();

	five_quiz();
	
	printf("\n여섯번째 문제 두수를 입력\n");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);

	printf("\ntotal = %d\n", sixth_quiz(num1, num2));


	printf("7번문제 두수를 +, *, -\n");
	char c7;
	rewind(stdin);
	scanf_s("%c", &c7, sizeof(c7));
	int result7 = seven(result1, result2, c7);
	if (c7 != '-') {
		printf("%d와 %d까지의 %c한 값은? %d\n", result1, result2, c7, result7);
	}


	printf("8번 문제 n을 입력하세요\n");
	int n;
	scanf_s("%d", &n);

	printf("1부터 n까지의 곱 = %d\n", eight_quiz(n));
	

	return 0;

}