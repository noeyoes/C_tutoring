#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x1, x2, x3, x4;

	scanf("%d %d %d", &x1, &x2, &x3);
	x4 = (x1 + x2 + x3) / 3;

	if (x4 >= 90)
		printf("A");
	if (x4 >= 80)
		printf("B");
	if(x4 >= 70)
		printf("C");
	if (x4 >= 50)
		printf("D");
	else
		printf("F");

}