#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Max(int x, int y)
{
	if (x >= y)
		printf("%d", x);
	else
		printf("%d", y);
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	Max(x, y);
	return 0;
}