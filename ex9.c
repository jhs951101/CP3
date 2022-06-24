#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z, sum;
	printf("3개의 정수를 입력하세요 (x, y, z): ");
	scanf("%d %d %d", &x, &y, &z);

	sum = 0;
	
	sum += x;
	sum += y;
	sum += z;
	printf("3개 정수의 합은 %d\n", sum);
	return 0;
}