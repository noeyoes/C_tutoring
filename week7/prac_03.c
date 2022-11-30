// 매개변수로 정수 2개를 넘겨받아 두 수 사이에 있는 정수의 합 출력하기
// int SumNum(int x, int y)라는 함수 작성

#include <stdio.h>

int Max(int x, int y){
    int max;
    max = x > y ? x : y;
    return max;
}

int main(){
    int x, y, max;
    printf("정수 두 개를 입력하세요: ");
    scanf("%d %d", &x, &y);
    max = Max(x,y);
    printf("%d와 %d중 큰 수는 %d입니다.\n", x, y, max);
}