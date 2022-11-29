#include <stdio.h>

void func(int sel) {
    int input, result;
    switch (sel) {
        case 1:
            printf("¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
            scanf("%d", &input);
            result = 1.8*input+32;
            printf("È­¾¾ ¿Âµµ´Â %d ÀÔ´Ï´Ù.", result);
            break;
        case 2:
            printf("È­¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
            scanf("%d", &input);
            result = (input-32)/1.8;
            printf("¼·¾¾ ¿Âµµ´Â %d ÀÔ´Ï´Ù.", result);
            break;
    }
}

int main() {
    int sel;

    printf("1. È­¾¾ 2. ¼·¾¾ : ");
    scanf("%d", &sel);

    func(sel);

    return 0;
}