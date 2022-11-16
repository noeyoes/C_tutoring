#include <stdio.h>

int main() {
    int num = 0;
    printf("하나의 정수를 입력하세요: ");
    scanf("%d", &num);
    num = num * num;
    printf("%d", num);

    return 0;
}