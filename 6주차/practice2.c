#include <stdio.h>
#define STUDENTS 5

int main() {
    int grade[STUDENTS] = { 0 };
    int i;
    int sum = 0;
    float avg = 0;
    int maxgrade = 0;

    for (i = 0; i < STUDENTS; i++){
        printf("%d번째 학생 점수를 입력하세요 : ", i + 1);
        scanf("%d", &grade[i]);
    }

    for ( i = 0; i < STUDENTS; i++){
        sum += grade[i];

        if ( maxgrade > grade[i] )
            maxgrade = maxgrade;
        else if ( maxgrade <= grade[i])
            maxgrade = grade[i];

    }

    avg = (float)sum / STUDENTS;

    printf("평균점수: %0.1lf \n최고 점수: %d \n", avg, maxgrade);
}