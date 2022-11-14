#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;

	printf("정수 입력: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--)
			printf(" ");
		for (int k = 0; k < 2 * i + 1; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}