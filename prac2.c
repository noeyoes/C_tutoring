#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SumNum(int x, int y) {
	int sum = 0;
	for (int i = x + 1; i < y; i++) 
		sum += i;
	return sum;
}

int main2() {
	int num1, num2, sum;

	scanf("%d %d", &num1, &num2);
	sum = SumNum(num1, num2);
	printf("%d", sum);

	return 0;
}