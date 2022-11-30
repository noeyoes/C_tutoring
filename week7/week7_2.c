#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SumNum(int x, int y)
{
	printf("%d", x + y);
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	SumNum(x, y);
	return 0;
}