#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {
	int gugu;

	printf("����� ���� �Է��ϼ���: ");
	scanf("%d", &gugu);

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", gugu, i, gugu * i);
	}
	return 0;
}
int main2() {
	int num, fac=1;
	
	printf("���� �� ���� �Է��ϼ���: ");
	scanf("%d", &num);

	for (int i = 1; i < num + 1; i++) {
		fac *= i;
	}
	printf("%d! = %d", num, fac);
	return 0;
}

int main3() {
	int num;

	printf("���� �Է�: ");
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = num-i; j > 0; j--) 
			printf(" ");
		for (int j = 0; j<i*2+1;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

int main4() {
	int num;

	printf("���� �Է�: ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = num - 1 - i; j > 0; j--)
			printf(" ");
		for (int j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
	for (int i = num;i>0;i--){
		for (int j = (i-1) * 2 + 1; j > 0; j--)
			printf("*");
		printf("\n");
		for (int j = 0; j < num - i+1; j++)
			printf(" ");
	}
	return 0;
}

int main() {
	int num;
	while (1) {
		printf("== Ʈ�� �׸��� ���α׷� ==\n");
		printf("Ʈ���� ���̸� �Է��ϼ���(���� 5~15): ");
		scanf("%d", &num);

		if (num < 5) {
			printf("Ʈ���� ���̰� �ʹ� �����ϴ�.\n");
			continue;
		}
		else if (num > 15) {
			printf("Ʈ���� ���̰� �ʹ� �����ϴ�.\n");
			continue;
		}
		
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num - i; j++)
				printf(" ");
			printf("*");
			for (int j = i * 2 - 1; j >= 0; j--) {
				if (j != 0) {
					printf(" ");
				}
				else
					printf("*");
				
			}
			printf("\n");
		}
		for (int i = 0; i < 2 * num + 1; i++)
			printf("*");
		printf("\n");
		for (int i = 0; i < 1; i++) {
			for (int j = 0; j < num - i; j++) {
				printf(" ");
			}printf("|\n");
		}
		for (int i = 0; i < 1; i++) {
			for (int j = 0; j < num - i; j++) {
				printf(" ");
			}printf("|");
		}
		break;
	}
	return 0;

}