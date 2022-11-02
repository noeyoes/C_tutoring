#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int x;

	printf("하나의 정수를 입력하세요: ");
	scanf("%d", &x);

	printf("%d\n", x*x);
}