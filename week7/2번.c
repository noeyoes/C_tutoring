#include <stdio.h>

int SumNum(int x, int y)
{
	int sum = 0;
	int temp;

	if (x > y) {
		temp = x;
		x = y;
		y = temp;
	}
	for (int i = x; i <= y; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int x, y, sum;
	printf("���� �� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &x, &y);
	sum = SumNum(x, y);
	printf("�� �� ������ ���� %d�Դϴ�.\n", sum);
}