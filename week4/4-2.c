#include <stdio.h>

int main(){
	int x, y;
	int result;

	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &x, &y);

	(x > y) ? (result = x - y) : (result = y - x);

	printf("결과는 %d\n", result);
}