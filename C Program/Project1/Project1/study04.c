#include <stdio.h>

int g = 0; //전역변수


//지역변수 매개
void up1(int l) {

	
	l++;
}
//지역변수의 위치(포인터)를 매개
void up2(int* l) {
	(*l)++;
}

void up3() {
	g++;
}

int main() {
	int local = 10;
	up1(local);
	printf("local = %d\n", local);
	up2(&local);
	printf("local = %d\n", local);

	up3();
	printf("g=%d\n", g);
}