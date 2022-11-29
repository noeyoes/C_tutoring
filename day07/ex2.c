#include <stdio.h>

int SumNum(int x, int y) {
    int result = 0;

    if (x > y) {
        for (y ; y <= x ; y++) {
            result += y;
        }
    }
    else if (y > x) {
        for (x ; x <= y ; x++) {
            result += x;
        }
    }
    else {
        result = x;
    }

    return result;
}

int main() {
    int x, y;
    int result;

    printf("두 정수 입력: ");
    scanf("%d %d", &x, &y);

    result = SumNum(x, y);

    printf("%d, %d 사이에 있는 정수의 합은 %d 입니다.", x, y, result);

    return 0;
}