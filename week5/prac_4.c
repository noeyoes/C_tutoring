// 입력받은 수만큼 뒤집어진 피라미드 모양 출력

#include <stdio.h>

int main() {
    int x;

    printf("정수 입력: ");
    scanf("%d", &x);

    for(int i=0; i<x; i++){
        for(int j = x - 1; j > i; j--)
            printf(" ");
        for(int j=0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }
    for(int i=0; i<x; i++){
        for(int j = 0; j < i; j++)
            printf(" ");
        for(int j= 2 * x - 1; j > 2 * i; j--)
            printf("*");
        printf("\n");
    }
}