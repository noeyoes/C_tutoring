#include <stdio.h>

int main()
{
	int i;
	int n;
	int result = 1;
	printf("���� �Ѱ��� �Է��Ͻÿ�:");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		result = i * result;
	}
	printf("%d! = %d\n", n, result);
	return 0;
}