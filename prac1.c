#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Convert(int num) {

	printf("8진수: %o\n", num);
	printf("10진수: %d\n", num);
	printf("16진수: %x\n", num);
}

int main1() {
	int num;

	scanf("%d", &num);
	Convert(num);
	return 0;
}