#include <stdio.h>
void printMyself() //����
{
	printf("�ȳ��ϼ���\n");
	printf("���¿��Դϴ�.\n");
	printf("�ݰ����ϴ�\n");
	printf("���� �л��Դϴ�.\n");

}
int MathPower(int num) { //����
	if (num <= 0) {
		return 0;
	}

	return num * num;
}
char calcul() {
	printf("ù ��° ���� �Է��غμ���");
	int num1;
	scanf_s("%d", &num1);
	printf("�� ��° ���� �Է��غμ���.");
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
		printf("\n��ȣ�� -�Դϴ�\n");
	
	else if (result == 0)

		printf("\n��ȣ�� 0�Դϴ�\n");

	else printf("\n��ȣ�� +�Դϴ�\n");
	

}



int main(){
	
	int result = MathPower(5);

	printf("5�� ������ %d�Դϴ�.\n", result);

	printf("3�� ������ %d�Դϴ�.\n", MathPower(3));

	result = MathPower(-1);

	printf("result = %d\n", result);

	printMyself(); //ȣ��

	printf("calcul�� ��ȯ����: %c", calcul());

	//��ȯ���� ������ �Ű������� �ִ�.
	calcul_sign(30, 20);
	
	return 0;
}