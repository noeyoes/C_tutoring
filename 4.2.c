#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("수 두개 입력:");
	int x, y, result1, result2;
	scanf("%d%d", &x, &y);
	result1 = x - y;
	result2 = y - x;
	
	printf("%d", (x > y) ? result1 : result2);
}