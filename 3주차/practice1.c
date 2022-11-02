#include <stdio.h>

// int main(void){
//     char ch = 9;
//     int inum = 1052;
//     float dnum = 3.1415;

//     printf("ch의 크기: %lu \n", sizeof(ch));
//     printf("inum의 크기: %d \n", sizeof(inum));
//     printf("dunm의 크기 : %lf \n", sizeof(dnum));

//     printf("char의 크기: %d \n", sizeof(char));
//     printf("int의 크기: %d \n", sizeof(int));
//     printf("long의 크기: %d \n", sizeof(long));
//     printf("long long의 크기: %d \n", sizeof(long long));
//     printf("float의 크기: %d \n", sizeof(float));
//     printf("double의 크기: %lu \n", sizeof(double));
// }

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