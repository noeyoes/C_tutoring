#include <stdio.h>
int main(void)
{
	int x, y, sub;
	printf("�ΰ��� ������ �Է��Ͻÿ�:");
	scanf_s("%d %d", &x, &y);

	if (x > y)
		sub = x - y;
	else
		sub = y - x;
	printf("�� ������ ���� %d �Դϴ�.", sub);
	return 0;

}