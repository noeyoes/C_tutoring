#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main(void)
{
	int x;
	scanf("%d", &x);
	trans(x);
}

int trans(int x)
{
	int q = x;
	
	printf("8���� %o\n", q);
	printf("10���� %d\n", q);
	printf("16���� %x\n", q);




}