#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int result = 1;

	printf("factorial 계산을 할 정수 입력 : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		result *= i;
	}

	printf("%d! = %d", n, result);
	return 0;
}