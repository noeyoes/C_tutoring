#include <stdio.h>

int main(void){

    int a,b,c;
    a = 5;
    b = 4;

    c = a + b;
    printf("%d + %d = %d \n", a,b,c);
    
    c = a - b;
    printf("%d - %d = %d \n", a,b,c);

    c = a * b;
    printf("%d * %d = %d \n", a,b,c);

    c = a / b;
    printf("%d / %d = %d \n", a,b,c);
}