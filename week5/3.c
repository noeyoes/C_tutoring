#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int height;
	int k = 0;

	while (1) {
		printf("=== 트리 그리기 프로그램 === \n");
		printf("트리의 높이를 입력하세요(범위 5-15) : ");
		scanf("%d", &height);

		if (height < 5)
			printf("트리의 높이가 너무 낮습니다.\n");

		else if (height > 15)
			printf("트리의 높이가 너무 높습니다.\n");
	
		else {
			for (int i = 1; i <= height; i++) {
				for (int j = i; j < height; j++) {
					printf(" ");
				}
				while (k != (2 * i - 1)) {
					if (k == 0 || k == 2 * i - 2)
						printf("*");
					else
						printf(" ");
					k++;
				}
				k = 0;
				printf("\n"); // print next row
			}

			for (int i = 0; i < 2 * height - 1; i++) {
				printf("*");
			}

			printf("\n");

			for (int j = 0; j < 2; j++) {
				for (int i = 0; i < (2 * height - 1) / 2; i++) {
					printf(" ");
				}
				printf("|");
				printf("\n");
			}
			break;
		}
	}
}