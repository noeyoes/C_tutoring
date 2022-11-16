#include <stdio.h>

//5주차
int main() {
	int num = 0;
	int result = 1;

	printf("정수 입력: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	printf("%d! = %d\n", num, result);

	return 0;
}