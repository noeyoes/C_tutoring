#include <stdio.h>

int main() {
	int num = 0;
	int result = 1;

	printf("숫자 한 개를 입력하세요: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	printf("%d! = %d\n", num, result);

	return 0;
}