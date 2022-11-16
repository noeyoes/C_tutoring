#include <stdio.h>

int main() {
	int num = 10;
	int i=0, j=0, k=0;

	while (5 <= num <= 15) {
		printf("== 트리 그리기 프로그램 ==\n");
		printf("트리의 높이를 입력하세요 5~15): ");
		scanf("%d", &num);
		if (num < 5) printf("트리의 높이가 너무 낮습니다.\n");
		else if (num > 15) printf("트리의 높이가 너무 높습니다.\n");
		else break;
	}

	for (i = 1; i <= num; i++) {
		for (j = i; j < num; j++) {
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
		printf("\n");
	}

	for (i = 0; i < 2 * num - 1; i++) {
		printf("*");
	}
	printf("\n");
	for (k = 0;k <= 1;k++) {
		for (i = 1; i <= (2 * num - 1);i++) {
			if (i == ((2 * num - 1) / 2 + 1)) {
				printf("|");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}