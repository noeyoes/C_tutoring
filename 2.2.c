#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4;
	scanf("%d %d %d", &num1, &num2, &num3);
	num4 = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("%d", num4);

}