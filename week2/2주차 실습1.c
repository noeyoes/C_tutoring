#include <stdio.h>
int main(void)

{
	int num, a;
	printf("하나의 정수를 입력하시오:");
	scanf_s("%d", &num);

	a = num * num;
		printf("%d", a);
	return 0;
}