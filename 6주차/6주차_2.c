#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int score[5], avg = 0, max = 0;

    printf("�л� 5���� ���� �Է� : ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
        avg += score[i];
    }
    avg /= 5;
    for (int i = 0; i < 5; i++) {
        if (score[i] > max) {
            max = score[i];
        }
    }
    printf("������� : %d, �ְ����� : %d", avg, max);
    
    return 0;
}