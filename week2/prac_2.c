// - 입력 받은 세 개의 정수 num1, num2, num3을 대상으로 다음 연산의 결과를 출력하는 프로그램 작성
// - (num1-num2) * (num2+num3) * (num3%num1)

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("세 개의 정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("결과는 %d\n", (num1-num2) * (num2+num3) * (num3%num1));
}