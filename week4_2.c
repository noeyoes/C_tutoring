#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("두개의 정수 입력: ");
	scanf("%d %d", &x, &y);

	(x > y) ? printf("%d", (x - y)) : printf("%d", (y - x));

	return 0;
}