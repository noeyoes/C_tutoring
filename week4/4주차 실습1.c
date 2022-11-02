#include <stdio.h>
int main(void)
{
	int x, y, sub;
	printf("두개의 정수를 입력하시오:");
	scanf_s("%d %d", &x, &y);

	if (x > y)
		sub = x - y;
	else
		sub = y - x;
	printf("두 정수의 차는 %d 입니다.", sub);
	return 0;

}