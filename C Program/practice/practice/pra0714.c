#include<stdio.h>
#include<windows.h>
void colorChange()
{
	char string[10] = "color ";
	char a;
	char b;
	rewind(stdin);
	scanf_s("%c", &string[6], sizeof(string[6]));
	rewind(stdin);
	scanf_s("%c", &string[7], sizeof(string[7]));

	string[8] = NULL;

	system(string);
}

int main()
{
	printf("바꿀 색을 입력하시오.\n");
	colorChange();
}
