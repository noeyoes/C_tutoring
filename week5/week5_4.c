#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a;
	int b;
	int c;
	int num;
	printf("���̾Ƹ���� ũ���Է�:");
	scanf("%d", &num);

	for (a = 0; a < num; a++)   
	{
		for (b = a; b < num; b++) {
			printf(" ");
		}
		for (c = 0; c <= (a * 2); c++) {
			printf("*");
		}
		printf("\n");
	}

	for (a = num - 1; a > 0; a--) 
	{
		for (b = a; b <= num; b++) { 
			printf(" ");
		}

		for (c = 0; c <= ((a - 1) * 2); c++) {
			printf("*");
		}

		printf("\n");
	}



	return 0;
}