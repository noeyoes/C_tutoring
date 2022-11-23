#include <stdio.h>

int main(void) {
	int x1, y1, x2, y2, result = 0;
	printf("좌 상단의 x,y 좌표 값 입력 : ");
	scanf("%d %d", &x1, &y1);
	printf("우 하단의 x,y 좌표 값 입력 : ");
	scanf("%d %d", &x2, &y2);

	result = (x2 - x1) * (y2 - y1);

	printf("직사각형 넓이 : %d", result);
}