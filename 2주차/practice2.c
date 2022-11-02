#include <stdio.h>

int main(void){
    int num1, num2, num3;

    printf("세개의 정수를 입력하시오: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    printf("%d \n", (num1-num2) * (num2+num3) * (num3%num1));
}