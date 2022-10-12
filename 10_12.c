#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int prac1() {
	printf("이름: 문재영\n생일: 1월 2일");
	return 0;
}

int prac2() {
	printf("%d+%d=%d", 5, 4, 5+4);
	printf("%d-%d=%d", 5, 4, 5-4);
	printf("%d*%d=%d", 5, 4, 5*4);
	printf("%d/%d=%d", 5, 4, 5/4);
	return 0;
}

int prac3() {
	printf("%s %s %s","문재영", "컴퓨터과학전공","1");
	return 0;
}

int prac4() {
	int num1, num2;
	printf("두 개의 정수를 입력하시오:");
	scanf("%d %d", &num1, &num2);

	printf("%d+%d=%d", num1, num2, num1 + num2);
	printf("%d-%d=%d", num1, num2, num1 - num2);
	printf("%d*%d=%d", num1, num2, num1 * num2);
	printf("%d/%d=%d", num1, num2, num1 / num2);
	return 0;
}