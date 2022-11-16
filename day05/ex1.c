#include <stdio.h>

int main() {
	int num = 0;
	int result = 0;

	printf("숫자 한 개를 입력하세요: ");
	scanf("%d", &num);

	for (int i = 1;i < 10;i++) {
		result = num * i;
		printf("%d * %d = %d\n", num, i, result);
	}

	return 0;
}