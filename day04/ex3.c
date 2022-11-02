#include <stdio.h>

int main() {
	int kor, eng, math;
	int sum = 0;
	float avg = 0;
	
	printf("국어, 영어, 수학 점수 입력: ");
	scanf("%d %d %d", &kor, &eng, &math);

	sum = kor + eng + math;
	avg = sum / 3;

	if (avg >= 90) printf("A");
	else if (avg >= 80) printf("B");
	else if (avg >= 70) printf("C");
	else if (avg >= 50) printf("D");
	else printf("F");

	return 0;
}