#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int prac3_1() {
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("변수 ch의 크기: %d\n변수 inum의 크기: %d\n변수 dnum의 크기: %d", sizeof(ch), sizeof(inum), sizeof(dnum));
	printf("\nchar의 크기: %d\nint의 크기: %d\nlong의 크기: %d\nlong long의 크기: %d", sizeof(char), sizeof(int), sizeof(long), sizeof(long long));
	printf("\nfloat의 크기: %d\ndouble의 크기: %d", sizeof(float), sizeof(double));

	// 1 4 8 1 4 4 8 4 8
	return 0;
}

int prac3_2() {
	int lx, ly; //좌상단의 좌표
	int rx, ry; //우하단의 좌표
	int recx, recy;

	scanf("%d %d", &lx, &ly); // 1 5
	scanf("%d %d", &rx, &ry); // 5 1

	recx = rx - lx; recy = ly - ry;
	printf("두 점이 이루는 직사각형의 넓이: %d", recx*recy); //16
	
	return 0;
}

int prac3_3() {
	double km, mile;

	printf("Please enter kilometers: "); 
	scanf("%lf", &km); //3.5253

	mile = km / 1.609;
	printf("%.1fkm is equal to %.1f miles.", km, mile); //3.5km is equal to 2.2miles.

	return 0;
}