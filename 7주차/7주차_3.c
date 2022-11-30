#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Max(int x, int y) {
	int result = 0;
	if (x > y)
		result = x;
	else
		result = y;
	return result;
}
int main(void) {
	int x, y;
	printf("정수 두 개 입력 : ");
	scanf("%d %d", &x,&y);
	printf("큰 수 : %d", Max(x, y));
}