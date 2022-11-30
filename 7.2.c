#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	plus(x, y);
}

int plus(x, y)
{
	int a = x + 1;
	for (int i = x; i < y - 2; i++)
	{
		a = a + (a + 1);
	}
	printf("%d", a);
}