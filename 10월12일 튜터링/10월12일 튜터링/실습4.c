#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a;
	int b;
	printf("�� ���� ������ �Է��Ͻÿ�:");
	scanf_s("%d %d", &a, &b);

	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%d\n", a, b, a / b);
	return 0;
}