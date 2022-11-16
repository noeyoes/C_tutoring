#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	int num, i;
	printf("숫자 한 개를 입력하세요 : ");
	scanf("%d", &num);
	for (i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", num, i, num*i);
}