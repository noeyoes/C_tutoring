// 프로그램 사용자로부터 입력받은 숫자에 해당하는 구구단 출력하기

#include <stdio.h>

int main() {
    int x;

    printf("숫자 한 개를 입력하세요: ");
    scanf("%d", &x);

    for (int i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", x, i, x*i);
    }
    
}