#include <stdio.h>

int main() {
	int n1, n2, result;

	printf("두 수 입력: ");
	scanf("%d %d", &n1, &n2);

	result = n1 - n2;

	if (result <= 0)
		result *= -1;
	else
		result = result;

	printf("%d", result);


	return 0;
}