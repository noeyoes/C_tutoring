#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float Km, Miles;

	printf("Please enter kilometers: ");
	scanf("%f", &Km);

	Miles = Km / 1.609;
	printf("%.1fkm is equal to %.1f miles.", Km, Miles);
}