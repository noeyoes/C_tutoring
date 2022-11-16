#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, j;
	printf("숫자 한 개를 입력하세요 : ");
	scanf("%d", &i);
	
	for (j = 1; j < 10; j++) {
		printf("%d * %d = %d \n", i, j, i * j);
	}
	return 0;
}