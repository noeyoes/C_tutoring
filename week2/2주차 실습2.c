#include <stdio.h>

int main(void)
{
	int num1, num2, num3, a;
	printf("������ ������ �Է��Ͻÿ�:");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	a = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("%d", a);
	return 0;
}