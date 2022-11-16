#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	int High, out = 0, n, k = 0;
	
	while (out =1)
	{
		printf("== 트리 그리기 프로그램 == \n");
		printf("트리의 높이를 입력하세요 (범위 5~15): \n");
		scanf("%d", &n);
		if (n < 5)
			printf("트리의 높이가 너무 낮습니다.\n");
		else if (n > 15)
			printf("트리의 높이가 너무 높습니다.\n");
		else
		{
			out = 1;
			break;
		}
			
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j < n; j++) 
		{
			printf(" ");
		}
		while (k != (2 * i - 1)) 
		{
			if (k == 0 || k == 2 * i - 2)
				printf("*");
			else
				printf(" ");
			k++;
		}
		k = 0;
		printf("\n"); // print next row
	}

	for (int i = 0; i < 2 * n - 1; i++) 
	{
		printf("*");
	}

	printf("\n");
	for (int i = 0; i < n - 1; i++)
	{
		printf(" ");
	}
	printf("|\n");
	for (int i = 0; i < n - 1; i++)
	{
		printf(" ");
	}
	printf("|\n");
}