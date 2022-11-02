#include <stdio.h>

int main(void)
{
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