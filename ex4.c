/* 2의 보수 프로그램*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 3;
	int y = -3;

	printf("x = %08X\n", x);	// 8자리의 16진수로 출력한다.
	printf("y = %08X\n", y);	// 8자리의 16진수로 출력한다.
	printf("x+y = %08X\n", x+y);	// 8자리의 16진수로 출력한다.

	return 0;
}