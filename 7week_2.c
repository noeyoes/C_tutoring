#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SumNum(int x, int y)
{
	int sum=0;
	if (x > y)
	{
		for (int i = y+1; i < x; i++)
		{
			sum += i;
		}
	}
	else
	{
		for (int i = x+1; i < y; i++)
		{
			sum += i;
		}
	}

	printf("%d", sum);
}

int main(void)
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	SumNum(x, y);

	return 0;
}
