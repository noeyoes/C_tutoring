#include <stdio.h>

int main(void)
{
	int a;
	int b;

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d%d", &a, &b);

	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%d\n", a, b, a / b);

	return 0;
}