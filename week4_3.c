#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	int num = 0;

	printf("국어, 영어, 수학 점수 입력: ");
	scanf("%d %d %d", &x, &y, &z);

	num = (x + y + z) / 3;

	if (num >= 90)
		printf("A");
	else if (num >= 80)
		printf("B");
	else if (num >= 70)
		printf("C");
	else if (num >= 50)
		printf("D");
	else
		printf("F");

	return 0;
}