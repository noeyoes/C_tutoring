#include <stdio.h>
int main(void)
{
	int n1, n2;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d", &n1, &n2);
	printf("%d", (n1 > n2) ? (n1 - n2) : (n2 - n1));

	return 0;
}