#include <stdio.h>

int main(void) {
	int x1, y1, x2, y2, result = 0;
	printf("�� ����� x,y ��ǥ �� �Է� : ");
	scanf("%d %d", &x1, &y1);
	printf("�� �ϴ��� x,y ��ǥ �� �Է� : ");
	scanf("%d %d", &x2, &y2);

	result = (x2 - x1) * (y2 - y1);

	printf("���簢�� ���� : %d", result);
}