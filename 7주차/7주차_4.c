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
	printf("1. ȭ�� 2. ���� : ");
	scanf("%d", &num);
	if (num == 1) {
		printf("ȭ�� �µ��� �Է��ϼ��� : ");
		scanf("%d", &tem);
		CeltoFah(tem);
		printf("���� �µ��� %d �Դϴ�.", CeltoFah(tem));
	}
	else {
		printf("���� �µ��� �Է��ϼ��� : ");
		scanf("%d", &tem);
		FahtoCel(tem);
		printf("ȭ�� �µ��� %d �Դϴ�.", FahtoCel(tem));
	}
}