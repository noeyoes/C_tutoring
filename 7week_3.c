#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main(void)
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	printf("%d", Max(x, y));

	return 0;
}
