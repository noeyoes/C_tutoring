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
	printf("���� �� �� �Է� : ");
	scanf("%d %d", &x,&y);
	printf("ū �� : %d", Max(x, y));
}