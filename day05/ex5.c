#include <stdio.h>

int main() {
	int num = 10;
	int i=0, j=0, k=0;

	while (5 <= num <= 15) {
		printf("== Ʈ�� �׸��� ���α׷� ==\n");
		printf("Ʈ���� ���̸� �Է��ϼ���(���� 5~15): ");
		scanf("%d", &num);
		if (num < 5) printf("Ʈ���� ���̰� �ʹ� �����ϴ�.\n");
		else if (num > 15) printf("Ʈ���� ���̰� �ʹ� �����ϴ�.\n");
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