#include<stdio.h>
//1¹ø
char* DDI_year(int year)
{
	int animal = year % 12;
	switch (animal)
	{
	case 0: return "¿ø¼şÀÌ¶ì";
	case 1: return "´ß¶ì";
	case 2: return "°³¶ì";
	case 3: return "µÅÁö¶ì";
	case 4: return "Áã¶ì";
	case 5: return "¼Ò¶ì";
	case 6: return "È£¶ûÀÌ¶ì";
	case 7: return "Åä³¢¶ì";
	case 8: return "¿ë¶ì";
	case 9: return "¹ì¶ì";
	case 10: return "¸»¶ì";
	case 11: return "¾ç¶ì";
	default:
		return -1;
		break;
	}
}
int main()
{
	int n;
	printf("1¹ø) ¾ğÁ¦ ÅÂ¾î³µ³ª¿ä? ");
	scanf_s("%d", &n);
	//char result = DDI_year(n);
	printf("%s\n", DDI_year(n));
}