#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int prac1() {
	printf("�̸�: ���翵\n����: 1�� 2��");
	return 0;
}

int prac2() {
	printf("%d+%d=%d", 5, 4, 5+4);
	printf("%d-%d=%d", 5, 4, 5-4);
	printf("%d*%d=%d", 5, 4, 5*4);
	printf("%d/%d=%d", 5, 4, 5/4);
	return 0;
}

int prac3() {
	printf("%s %s %s","���翵", "��ǻ�Ͱ�������","1");
	return 0;
}

int prac4() {
	int num1, num2;
	printf("�� ���� ������ �Է��Ͻÿ�:");
	scanf("%d %d", &num1, &num2);

	printf("%d+%d=%d", num1, num2, num1 + num2);
	printf("%d-%d=%d", num1, num2, num1 - num2);
	printf("%d*%d=%d", num1, num2, num1 * num2);
	printf("%d/%d=%d", num1, num2, num1 / num2);
	return 0;
}