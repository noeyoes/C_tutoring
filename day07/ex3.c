#include <stdio.h>

int Max(int x, int y) {
    int result;

    if (x >= y) result = x;
    else result = y;

    return result;
}

int main() {
    int x, y, result;

    printf("�� ������ �Է��ϼ���: ");
    scanf("%d", &x);
    scanf("%d", &y);

    result = Max(x,y);

    printf("%d, %d�� ū ���� %d�Դϴ�.", x, y, result);

    return 0;
}