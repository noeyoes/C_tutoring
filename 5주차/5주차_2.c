#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, result = 1;
	printf("���� �� ���� �Է��ϼ��� : ");
	scanf("%d", &num);
	
	for (int i = 1; i <= num; i++) {
		result *= i;	
	}
	printf("%d! = %d", num, result);
	return 0;
}