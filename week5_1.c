#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int n;
	printf("숫자 한 개를 입력하세요: ");
	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}
	
	return 0;
}