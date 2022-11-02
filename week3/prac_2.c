// - 프로그램 사용자로부터 두 점의 x, y 좌표를 입력받는다
// - 두 점이 이루는 직사각형의 넓이를 계산하여 출력한다
// - 좌 상단의 x, y 좌표 값이 우 하단의 x, y 좌표 값보다 작다고 가정
// - 좌 상단의 좌표 정보를 먼저 입력받는 형태

#include <stdio.h>

int main(){
    int x1, y1;
    int x2, y2;
    int width, height;
    int rectangle;

    printf("좌 상단의 x, y좌표: ");
    scanf("%d %d", &x1, &y1);
    printf("우 상단의 x, y좌표: ");
    scanf("%d %d", &x2, &y2);
    width = x2 - x1;
    height = y2 - y1;
    rectangle = width * height;
    printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", rectangle);
}