#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double km;

	printf("Please enter kilometers:");
	scanf("%lf", &km);

	printf("%.1lfkm is equal to %.1lf miles.", km, km / 1.609);

	return 0;
}