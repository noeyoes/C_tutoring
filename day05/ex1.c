#include <stdio.h>

//5����
int main() {
	int num = 0;
	int result = 0;

	printf("���� �Է�: ");
	scanf("%d", &num);

	for (int i = 1;i < 10;i++) {
		result = num * i;
		printf("%d * %d = %d\n", num, i, result);
	}

	return 0;
}