#include <stdio.h>

//5����
int main() {
	int num = 0;
	int result = 1;

	printf("���� �Է�: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	printf("%d! = %d\n", num, result);

	return 0;
}