#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x1, y1, x2, y2, size;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	size = (y2 - y1) * (x2 - x1);
	printf("%d", size);
	
}