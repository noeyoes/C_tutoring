#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;

	printf("몇 단 ? : ");
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", n, i, n * i);
	}

	return 0;
}