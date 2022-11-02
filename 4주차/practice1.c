#include <stdio.h>

int main(void){
    int x,y, result;

    printf("두개의 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    if (x > y)
		result = x - y;
	else
		result = y - x;
	
	printf("결과값: %d\n", result);
        
}