#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SumNum(int x, int y) {
	int result = 0;
	for (int i = x + 1; i < y; i++) {
		result += i;
	}
	return result;
}
int main(void) {
	int x, y;
	printf("���� �� �� �Է� : ");
	scanf("%d %d", &x,&y);
	printf("�� : %d", SumNum(x, y));
}