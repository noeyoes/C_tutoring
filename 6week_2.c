#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score[5];
	int sum = 0;
	int max;

	printf("성적을 입력하세요: ");

	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < 5; i++) {
		sum += score[i];
	}

	max = score[0];
	for (int i = 0; i < 5; i++) {
		if (max < score[i])
			max = score[i];
	}

	double ave = sum / 5;

	printf("평균 점수는 %0.1f입니다.\n", ave);
	printf("최고 점수는 %d입니다.\n", max);

	return 0;
}