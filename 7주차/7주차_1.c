#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Convert(int num) {
	printf("8���� : %o, 10���� : %d, 16���� : %x ", num, num, num);
}
int main(void) {
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);
	Convert(num);	
}