#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	int num;
	printf("정수입력: ");
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num -1; j++)
		{
			printf(" ");
		}
		for (int h = 0; h < i * 2 + 1; h++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = num -1 - i; j < num -1; j++)
		{
			printf(" ");
		}
		for (int h = 0; h < (num - i)*2 - 1; h++)
		{
			printf("*");
		}
		printf("\n");
	}

}