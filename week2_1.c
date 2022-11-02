#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;

	printf("하나의 정수 입력: ");
	scanf("%d", &x);

	printf("%d", x*x);

	return 0;
}