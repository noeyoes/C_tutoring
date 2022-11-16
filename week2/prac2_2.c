#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int num1, num2, num3;

    printf("세 개의 정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("결과는 %d\n", (num1-num2) * (num2+num3) * (num3%num1));
}