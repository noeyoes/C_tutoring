// - 하나의 정수를 입력 받아서, 그 수의 제곱의 결과를 출력하는 프로그램 작성
// - 예를 들어서 5가 입력되면 25가 출력되어야 한다.

#include <stdio.h>

int main() {
	int x;

	printf("하나의 정수를 입력하세요: ");
	scanf("%d", &x);

	printf("%d\n", x*x);
}