#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	Max(x, y);
}

int Max( x, y)
{
	int ans;
	if (x > y)
	{
		ans = x;
	}
	else
	{
		ans = y;
	}
	printf("%d", ans);
}