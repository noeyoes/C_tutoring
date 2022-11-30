#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CeltoFah(int tem) {
	int result = 0;
	result = 1.8 * tem + 32;
	return result;
}
int FahtoCel(int tem) {
	int result = 0;
	result = (tem - 32) / 1.8;
	return result;
}
int main(void) {
	int num, tem;
	printf("1. È­¾¾ 2. ¼·¾¾ : ");
	scanf("%d", &num);
	if (num == 1) {
		printf("È­¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
		scanf("%d", &tem);
		CeltoFah(tem);
		printf("¼·¾¾ ¿Âµµ´Â %d ÀÔ´Ï´Ù.", CeltoFah(tem));
	}
	else {
		printf("¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
		scanf("%d", &tem);
		FahtoCel(tem);
		printf("È­¾¾ ¿Âµµ´Â %d ÀÔ´Ï´Ù.", FahtoCel(tem));
	}
}