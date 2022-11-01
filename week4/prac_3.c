// 학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성하자.
// 학생의 성적이 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 50점 이상이면 D, 그 미만이면 F
// 프로그램 실행 시 순서대로 국어, 영어, 수학의 점수를 입력 받는다.
// 평균을 구한 다음 그에 적절한 학점을 출력

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