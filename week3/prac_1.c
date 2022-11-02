// ch = 9, inum=1052, dnum=3.1415 일때 
// ch, inum, dunm과 char, int, long, long long, float, double의 
// 크기를 출력하는 코드를 작성하시오

#include <stdio.h>

int main() {
    char ch = 9;
    int inum = 1052;
    float dnum = 3.1415;

    printf("변수 ch의 크기: %d \n", sizeof(ch));
    printf("변수 inum의 크기: %d \n", sizeof(inum)); 
    printf("변수 dnum 크기: %d \n", sizeof(dnum));

    printf("char의 크기: %d \n", sizeof(char));
    printf("int의 크기: %d \n", sizeof(int));
    printf("long의 크기: %d \n", sizeof(long));
    printf("long long의 크기: %d \n", sizeof(long long));
    printf("float의 크기: %d \n", sizeof(float));
    printf("double의 크기: %d \n", sizeof(double));
}
