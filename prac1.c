#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Convert(int num) {

	printf("8����: %o\n", num);
	printf("10����: %d\n", num);
	printf("16����: %x\n", num);
}

int main1() {
	int num;

	scanf("%d", &num);
	Convert(num);
	return 0;
}