#include <stdio.h>

int main() {

	int result = printf("hello");
	printf("\nresult �� = %d\n", result); //printf �� byte�� return 
	int n, m;
	int a = scanf_s("%d", &n);
	int b = scanf_s("%d %d", &n, &m);
	result = printf("\n%d %d\n", n, m);
	printf("\nresult = %d, a= %d, b= %d\n", result, a, b);
	
	


	int s;
	scanf_s("%d", &s);
	int ss = printf("%d", s);

	printf("%d", ss);
	
	return 0;
}