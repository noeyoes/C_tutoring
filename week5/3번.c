#include <stdio.h>

int main()
{
	int n;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", n);

	for (int i = 1; i <= n; i++)
	{
		printf("*" * i);
	}
	return 0;
}