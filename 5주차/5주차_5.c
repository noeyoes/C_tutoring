#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int i, j, k = 0;

    while (1) {
        printf("== 트리 그리기 프로그램 ==\n");
        printf("트리의 높이를 입력하세요(범위 5~15): ");
        scanf("%d", &n);
        if (n < 5)
            printf("트리의 높이가 너무 낮습니다.\n");
        else if (n > 15)
            printf("트리의 높이가 너무 높습니다.\n");
        else {
            for (i = 1; i <= n; i++) {
                for (j = i; j < n; j++) {
                    printf(" ");
                }
                while (k != (2 * i - 1)) {
                    if (k == 0 || k == 2 * i - 2)
                        printf("*");
                    else
                        printf(" ");
                    k++;
                }
                k = 0;
                printf("\n"); // print next row
            }

            for (i = 0; i < 2 * n - 1; i++) {
                printf("*");
            }

            printf("\n");

            for (i = 1; i < 3; i++) {
                for (j = 0; j < (2 * n - 1) / 2; j++) {
                    printf(" ");
                }
                printf("|\n");
            }
            break;
        }
    }
}