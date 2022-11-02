#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x1, y1, x2, y2;

	printf("두 점의 좌표 입력: ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	printf("%d", (x2 - x1) * (y2 - y1));

	return 0;
}