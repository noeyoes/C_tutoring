// 프로그램 사용자로부터 입력받은 n에 대한 n!을 계산하는 프로그램 작성
// n! = 1 * 2 * ... * n

#include <stdio.h>

int main() {
    int n;
    int fac = 1;

    printf("숫자 한 개를 입력하세요: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        fac = fac * i;
    }
    printf("%d! = %d\n", n, fac);
}