#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int n = 0, i = 0;

	printf("���� �� ���� �Է��ϼ���:");
	scanf("%d", &n);

	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}
	return 0;
}