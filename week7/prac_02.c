// 매개변수로 정수 2개를 넘겨받아 두 수 사이에 있는 정수의 합 출력하기
// int SumNum(int x, int y)라는 함수 작성

#include <stdio.h>

int SumNum(int x, int y){
    int sum = 0;
    int temp;

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    for (int i = x; i <= y; i++)
    {
        sum += i;
    }
    return sum;
}

int main(){
    int x, y, sum;
    printf("정수 두 개를 입력하세요: ");
    scanf("%d %d", &x, &y);
    sum = SumNum(x,y);
    printf("두 수 사이의 합은 %d입니다.\n", sum);
}