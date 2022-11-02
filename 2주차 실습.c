#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int prac2_1() {
	int num;
	
	scanf("%d", &num); //5
	printf("%d\n", num * num); //25

	return 0;
}

int prac2_2() {
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d", (num1 - num2) * (num2 + num3) * (num3 % num1));
	return 0;
}