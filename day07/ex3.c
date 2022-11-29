#include <stdio.h>

int Max(int x, int y) {
    int result;

    if (x >= y) result = x;
    else result = y;

    return result;
}

int main() {
    int x, y, result;

    printf("두 정수를 입력하세요: ");
    scanf("%d", &x);
    scanf("%d", &y);

    result = Max(x,y);

    printf("%d, %d중 큰 수는 %d입니다.", x, y, result);

    return 0;
}