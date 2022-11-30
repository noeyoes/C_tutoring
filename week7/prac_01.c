#include <stdio.h>

void Convert(int num) {
    printf("8진수는 %o, 10진수는 %d, 16진수는 %x\n", num, num, num);
}

int main(){
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    Convert(num);
}