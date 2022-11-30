#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main(void)
{
	int select, x;
	printf("1. È­¾¾ 2. ¼·¾¾ :");
	scanf("%d", &select);
	if (select == 1)
	{
		printf("¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ½Ê½Ã¿À : ");
		scanf("%d", &x);
		CelToFah(x);
	}
	if (select == 2)
	{
		printf("È­¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ½Ê½Ã¿À : ");
		scanf("%d", &x);
		FahtoCel(x);
	}
}

int CelToFah(int x)
{
	printf("%f", 1.8 * x + 32);
}

int FahtoCel(int x)
{
	printf("%f", (x - 32) / 1.8);
}