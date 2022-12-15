#include<stdio.h>
#include<string.h> //<-이 헤더 파일 포함시키면, strcpy랑 strcat에 _s를 붙여야 함
//stdio.h만 있으면 strcpy,


char* ganzi(int year)
{	//문자열 자체가 배열이니 배열 안에 배열이라 2차원 배열
	char gan[10][10] = { "경","신","임","계","갑","을","병","정","무","기"};
	char zi[12][10] = { "신","유","술","해","자","축","인","묘","진","사","오","미"};

	static char gan_zi[10];// = "";

	//strcat 는 이어붙이기
	strcat_s(gan_zi, 10, gan[year % 10]);
	strcat_s(gan_zi, 10, zi[year % 12]);

	//printf("%s년\n", gan_zi);
	return gan_zi;
}
int main()
{
	int year;
	printf("2번) 태어난 년도는? ");
	scanf_s("%d", &year);
	printf("%s년", ganzi(year));
}