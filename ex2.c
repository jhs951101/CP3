/* 정수 상수 프로그램*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
       int x = 10;   // 10은 10진수이고 int형이고 값은 십진수로 10이다.
       int y = 010;  // 010은 8진수이고 int형이고 값은 십진수로 8이다.
       int z = 0x10; // 010은 16진수이고 int형이고 값은 십진수로 16이다.

       printf("x = %d\n", x);
       printf("y = %d\n", y);
       printf("z = %d\n", z);

       return 0;
}