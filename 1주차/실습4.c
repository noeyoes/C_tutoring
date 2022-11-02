#include <stdio.h>

int main(void){
    int a,b,c;
    
    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d",&a, &b);

    c = a + b;
    printf("%d + %d = %d \n", a,b,c);
    
    c = a - b;
    printf("%d - %d = %d \n", a,b,c);

    c = a * b;
    printf("%d * %d = %d \n", a,b,c);

    c = a / b;
    printf("%d / %d = %d \n", a,b,c);
}