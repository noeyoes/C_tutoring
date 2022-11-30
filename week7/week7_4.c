#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double CelToFah(double Cel)
{
	double Fah;
	Fah = 1.8 * Cel + 32;
	return Fah;
}

double FahToCel(double Fah)
{
	double Cel;
	Cel = (Fah - 32) / 1.8;
	return Cel;
}

int main()
{
	int i = 0;
	double  Fah = 0, Cel=0;
	printf("1. È­¾¾ 2. ¼·¾¾ :");
	scanf("%d", &i);
	
	if (i = 1)
	{
		printf("È­¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä:");
		scanf("%lf", &Fah);
		Cel = FahToCel(Fah);
		printf("¼·¾¾ ¿Âµµ´Â %f ÀÔ´Ï´Ù.\n", Cel);
	}
	if (i = 2)
	{
		printf("¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä:");
		scanf("%lf", &Cel);
		Fah = CelToFah(Cel);
		printf("È­¾¾ ¿Âµµ´Â %f ÀÔ´Ï´Ù.\n", Fah);
	}
}