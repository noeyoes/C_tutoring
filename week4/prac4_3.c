#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int kor, eng, math;
    int grade;

    printf("국어 영어 수학의 점수를 순서대로 입력하세요: ");
    scanf("%d %d %d", &kor, &eng, &math);

    grade = (kor + eng + math) / 3;

    if (grade >= 90)
        printf("성적은 A입니다.\n");
    else if (grade >= 80)
        printf("성적은 B입니다.\n");
    else if (grade >= 70)
        printf("성적은 C입니다.\n");
    else if (grade >= 50)
        printf("성적은 D입니다.\n");
    else
        printf("성적은 F입니다.\n");
}