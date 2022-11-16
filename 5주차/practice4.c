#include <stdio.h>

int main(void){
    int a, b;
    int i, j;
    printf("정수 입력: ");
    scanf("%d",&a);
    b = a / 2 + 1;
    for (i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(i <= b)
            {
                if((j>b-i) && (j<b+i))
                    printf("*");
                else
                    printf(" ");
            
            }
            else
            {
                if((j>i-b) && (j<=a-(i - b)))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}