#include <stdio.h>

void func(int sel) {
    int input, result;
    switch (sel) {
        case 1:
            printf("���� �µ��� �Է��ϼ���: ");
            scanf("%d", &input);
            result = 1.8*input+32;
            printf("ȭ�� �µ��� %d �Դϴ�.", result);
            break;
        case 2:
            printf("ȭ�� �µ��� �Է��ϼ���: ");
            scanf("%d", &input);
            result = (input-32)/1.8;
            printf("���� �µ��� %d �Դϴ�.", result);
            break;
    }
}

int main() {
    int sel;

    printf("1. ȭ�� 2. ���� : ");
    scanf("%d", &sel);

    func(sel);

    return 0;
}