#include <stdio.h>

int g = 0; //��������


//�������� �Ű�
void up1(int l) {

	
	l++;
}
//���������� ��ġ(������)�� �Ű�
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