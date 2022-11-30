#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int C2F(int cel) {
	int fah;

	fah = (1.8 * cel) + 32;
	return fah;
}
int F2C(int fah) {
	int cel;

	cel = (fah - 32) / 1.8;
	return cel;
}

int main4() {
	int cel, fah, c;

	printf("1. 화씨 2. 섭씨: ");
	scanf("%d", &c);

	if (c == 1) {
		printf("화씨 온도를 입력하세요: ");
		scanf("%d", &fah);
		cel = F2C(fah);
		printf("섭씨 온도는 %d입니다.", cel);
	}
	else if (c == 2) {
		printf("섭씨 온도를 입력하세요: ");
		scanf("%d", &cel);
		fah = C2F(cel);
		printf("화씨 온도는 %d입니다.", fah);
	}
	return 0;
}