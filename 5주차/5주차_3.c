#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - i; j++)
			printf(" ");
		for (int k = 0; k < 2 * i + 1; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}