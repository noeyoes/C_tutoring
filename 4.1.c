#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("�� �ΰ� �Է�:");
	int x, y, result1, result2;
	scanf("%d%d", &x, &y);
	result1 = x - y;
	result2 = y - x;
	if (x > y)
		printf("%d", result1);
	else
		printf("%d", result2);
}