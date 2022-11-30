#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CelToFah(int c) {
    int Fah;
    Fah = 1.8 * c + 32;
    return Fah;
}

int FahToCel(int f) {
    int Cel;
    Cel = (f - 32) / 1.8;
    return Cel;
}

int main() {
    int n, c, f;
    int Fah, Cel;
    printf("1. 화씨 2. 섭씨: ");
    scanf("%d", &n);

    switch (n) {
    case 1:
        printf("섭씨 온도를 입력하세요: ");
        scanf("%d", &c);
        Fah = CelToFah(c);
        printf("화씨 온도는 %d 입니다.\n", Fah);
        break;
    case 2:
        printf("화씨 온도를 입력하세요: ");
        scanf("%d", &f);
        Cel = FahToCel(f);
        printf("섭씨 온도는 %d 입니다.\n", Cel);
        break;
    }
}