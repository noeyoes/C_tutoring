#include <stdio.h>

int main() {
	int x1, x2, y1, y2;
	int area = 0;

	printf("직사각형의 첫 번째 점의 좌표 입력: ");
	scanf("%d %d", &x1, &y1);
	printf("직사각형의 두 번째 점의 좌표 입력: ");
	scanf("%d %d", &x2, &y2);

	area = (x2 - x1) * (y1 - y2);

	printf("%d", area);

	return 0;
}