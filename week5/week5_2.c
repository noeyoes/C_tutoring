#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Fact(int a) {
	int sum = 1;
	while (a > 0)
	{
		sum = sum * (a);
		a--;
	}
	return sum;
}


int main()
{
	int n=0;
	printf("숫자 한 개를 입력하세요:");
	scanf("%d", &n);
	printf("%d", Fact(n));
	return 0;
}