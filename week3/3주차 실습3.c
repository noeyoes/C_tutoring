#include <stdio.h>

int main(void)
{
	double km;
	const double mile = 1.609;

	printf("Please enter kilometers: ");
	scanf_s("%lf", &km);
	printf("%.1lfkm is equal to %.1lf miles. \n", km, km / mile);

	return 0;
}