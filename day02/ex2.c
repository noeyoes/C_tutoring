#include <stdio.h>

int main() {
	int num1 = 0, num2 = 0, num3 = 0, result = 0;

	printf("세 개 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num2);
	
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("%d ", result);

	return 0;
}