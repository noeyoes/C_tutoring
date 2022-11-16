#include <stdio.h>

int main()
{
	int i;
	int n;
	int result = 1;
	printf("숫자 한개를 입력하시오:");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		result = i * result;
	}
	printf("%d! = %d\n", n, result);
	return 0;
}