#include <stdio.h>

int main(void)
{
	int x1, y1, x2, y2;
	int x, y, s;
	printf("x��ǥ�� y��ǥ�� ���� �Է��Ͻÿ�:");
	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
	x = x2 - x1;
	y = y2 - y1;
	s = x * y;
	printf("���簢���� ���̴� %d�Դϴ�.", s);
	return 0;
}