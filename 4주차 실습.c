#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int prac4_1() {
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	if (num1 < num2) {
		printf("%d", num2 - num1);
	}
	else if (num1 > num2) {
		printf("%d", num1 - num2);
	}
	return 0;
}

int prac4_2() {
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	printf("%d", (num1 > num2) ? (num1 - num2) : (num2 - num1));

	return 0;
}

int prac4_3() {
	int k, m, e;
	int aver;

	aver = (k + m + e) / 3;
	if (aver >= 90) {
		printf("己利: A");
	}
	else if (aver >= 80)
		printf("己利: B");
	else if (aver >= 70)
		printf("己利: C");
	else if (aver >= 50)
		printf("己利: D");
	else
		printf("己利: F");

	return 0;
}