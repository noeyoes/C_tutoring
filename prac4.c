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

	printf("1. ȭ�� 2. ����: ");
	scanf("%d", &c);

	if (c == 1) {
		printf("ȭ�� �µ��� �Է��ϼ���: ");
		scanf("%d", &fah);
		cel = F2C(fah);
		printf("���� �µ��� %.2f�Դϴ�.", cel);
	}
	else if (c == 2) {
		printf("���� �µ��� �Է��ϼ���: ");
		scanf("%d", &cel);
		fah = C2F(cel);
		printf("ȭ�� �µ��� %.2f�Դϴ�.", fah);
	}
	return 0;
}