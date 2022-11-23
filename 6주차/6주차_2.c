#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int score[5], avg = 0, max = 0;

    printf("학생 5명의 성적 입력 : ");
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
    printf("평균점수 : %d, 최고점수 : %d", avg, max);
    
    return 0;
}