#include <stdio.h>
#define stu 5

int main() {
    int grade[stu] = { 0 };
    int i;
    int sum = 0;
    float avg = 0;
    int max_grade = 0;

    for (i = 0; i < stu; i++){
        printf("%d번째 학생 점수를 입력하세요 : ", i + 1);
        scanf("%d", &grade[i]);
    }

    for ( i = 0; i < stu; i++){
        sum += grade[i];

        if ( max_grade > grade[i] )
            max_grade = max_grade;
        else if ( max_grade <= grade[i])
            max_grade = grade[i];

    }

    avg = (float)sum / stu;

    printf("평균점수: %0.1lf \n최고 점수: %d \n", avg, max_grade);
}