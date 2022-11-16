// 입력받은 수만큼 피라미드모양으로 출력

#include <stdio.h>

int main() {
    int x;

    printf("정수 입력: ");
    scanf("%d", &x);
    
    for(int i=0; i<x; i++){
        for(int j = x - 1; j > i; j--)
            printf(" ");
        for(int j=0; j <2*i+1; j++)
            printf("*");
        printf("\n");
    }
}