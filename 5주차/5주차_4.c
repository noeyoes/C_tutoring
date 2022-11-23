#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		for (int j = num - 1; j > i; j--)
			printf(" ");
		for (int k = 0; k < 2 * i + 1; k++)
			printf("*");
		printf("\n");
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int k = 2 * num - 1; k > 2 * i; k--)
			printf("*");
		printf("\n");
	}
	return 0;
}