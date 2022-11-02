#include <stdio.h>

int main() {
	float input_km = 0;
	float output_mile = 0;

	printf("km ют╥б: ");
	scanf("%f", &input_km);

	output_mile = input_km / 1.609;

	printf("%.1f km is equal to %.1f miles", input_km, output_mile);

	return 0;
}