#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	int pow = 0;

	printf("정수 입력 : ");
	scanf("%d", &num);

	pow = num * num;

	printf("%d", pow);
	return 0;
}