#include <stdio.h>

int main(void)
{
	int x1, y1, x2, y2;
	int x, y, s;
	printf("x좌표와 y좌표를 각각 입력하시오:");
	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
	x = x2 - x1;
	y = y2 - y1;
	s = x * y;
	printf("직사각형의 넓이는 %d입니다.", s);
	return 0;
}