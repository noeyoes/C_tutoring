#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Convert(int num) {
	printf("8진수 : %o, 10진수 : %d, 16진수 : %x ", num, num, num);
}
int main(void) {
	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);
	Convert(num);	
}