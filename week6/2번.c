#include <stdio.h>
#define STUDENTS 5

int main(void)
{
	int grade[STUDENTS];
	int i;
	int sum = 0;
	float avg = 0;
	int maxgrade = 0;

	for (i = 0; i < STUDENTS; i++) {
		printf("%d��° �л� ������ �Է��Ͻÿ�:", i + 1);
		scanf_s("%d", &grade[i]);
	}
	for (i = 0; i < STUDENTS; i++) {
		sum += grade[i];

		if (maxgrade > grade[i])
			maxgrade = maxgrade;
		else if (maxgrade <= grade[i])
			maxgrade = grade[i];
	}
	avg = (float)sum / STUDENTS;
	printf("���:%lf\n�ְ���:%d\n", avg, maxgrade);
}