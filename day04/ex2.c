#include <stdio.h>

int main() {
	int n1, n2, result;

	printf("�� �� �Է�: ");
	scanf("%d %d", &n1, &n2);

	result = n1 - n2;

	(result <= 0) ? (result *= -1) : (result = result);

	printf("%d", result);

	return 0;
}