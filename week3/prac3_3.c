#include <stdio.h>

int main(void)
{
	float K, M;
	double Trans;
	printf("Please enter killometers:");
	scanf("%f", &K);
	M = K / 1.609;
	printf("%.1f km is equal to %.1f miles.", K, M);
	return 0;
}