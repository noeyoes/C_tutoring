#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Convert(int num)
{
	printf("%o\n", num);
	printf("%d\n", num);
	printf("%x\n", num);
}

int main(void)
{
	int num;
	scanf("%d", &num);

	Convert(num);

	return 0;
}
