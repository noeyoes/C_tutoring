#include <stdio.h>

int Max(int x, int y)
{
	int max;
	max = x > y ? x : y;
	return max;
}
int main()
{
	int x, y, max;
	printf("���� �ΰ��� �Է��ϼ���:");
	scanf_s("%d %d", &x, &y);
	max = Max(x, y);
	printf("%d�� %d�� ū ���� %d�Դϴ�.\n", x, y, max);
	return 0;
}
