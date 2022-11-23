#include <stdio.h>

int main(void) {
	int n1, n2, result = 0;
	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &n1, &n2);
	if (n1 > n2) {
		result = n1 - n2;
		printf("%d", result);
	}
	else {
		result = n2 - n1;
		printf("%d", result);
	}
	return 0;
}