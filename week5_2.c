#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("숫자 한 개를 입력하세요: ");
	scanf("%d", &n);

	int i;
	int sum = 1;
	for (i = 0; i < n; i++)
	{
		sum *= (n - i);
	}
	printf("%d! = %d", n, sum);
	
	return 0;
}