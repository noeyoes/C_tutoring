#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Max(int x, int y) {
	if (x <= y)
		return y;
	else
		return x;
}

int main3() {
	int num1, num2, big;

	scanf("%d %d", &num1, &num2);
	big = Max(num1, num2);
	printf("%d", big);

	return 0;
}