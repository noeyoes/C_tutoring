#include <stdio.h>

int main(void) {
	int k, e, m;
	double avg;

	printf("����, ����, ���� ���� �Է� : ");
	scanf("%d %d %d", &k, &e, &m);
	avg = (k + e + m) / 3;

	if (avg >= 90)
		printf("A");
	else if (avg >= 80)
		printf("B");
	else if (avg >= 70)
		printf("C");
	else if (avg >= 50)
		printf("D");
	else
		printf("F");
	return 0;
}