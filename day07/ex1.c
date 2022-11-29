#include <stdio.h>

void Convert(int num) {
    printf("8진수 출력: %o\n", num);
    printf("10진수 출력: %d\n", num);
    printf("16진수 출력: %x\n", num);
}

int main1() {
    int num;
    printf("출력한 정수를 입력하세요: ");
    scanf("%d", &num);

    Convert(num);

    return 0;
}