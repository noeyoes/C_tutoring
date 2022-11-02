// 두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그램 구현
// 단, 무조건 큰 수에서 작은 수를 뺀 결과를 출력
// 예를 들어서 입력된 두 수가 순서에 상관없이 4와 16이라면 12가 출력되어야 함
// 즉, 출력 결과는 무조건 0 이상이 되어야 함
// if~else문 사용하여 풀기

#include <stdio.h>

int main(){
	int x, y;
	int result;

	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &x, &y);

	if (x > y)
		result = x - y;
	else
		result = y - x;
	
	printf("결과는 %d\n", result);
}
