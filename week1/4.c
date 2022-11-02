#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int a, b;
    scanf("두 개의 정수를 입력하시오 : ");

    printf("%d+%d=%d\n", a, b, a+b);
    printf("%d-%d=%d\n", a, b, a-b);
    printf("%d*%d=%d\n", a, b, a*b);
    printf("%d/%d=%d\n", a, b, a/b);

    return 0;
}