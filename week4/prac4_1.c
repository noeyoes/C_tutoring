#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("두 수를 입력하세요 :");
	scanf("%d %d", &a, &b);

	if (a <= b)
	{
		printf("%d", b - a);
	}

	else
	{
		printf("%d", a - b);
	}
	return 0;
}
