#include <stdio.h>
#include "mytest.h"
#include "yourtest.h"

void test();

int main() {
	
	test();
	mytest();
	header();
	yourTypetest(10);

}


void test() {
	printf("함수 테스트");
}

