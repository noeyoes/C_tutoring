
#include <stdio.h>

int main(void)
{
	char ch = 9;
	int inum = 1052;
	long long dnum = 3.1415;
	int sz1 = sizeof(ch);
	int sz2 = sizeof(inum);
	int sz3 = sizeof(dnum);
	int sz4 = sizeof(char);
	int sz5 = sizeof(int);
	int sz6 = sizeof(long);
	int sz7 = sizeof(long long);
	int sz8 = sizeof(float);
	int sz9 = sizeof(double);

	printf("변수 ch의 크기: %d\n", sz1);
	printf("변수 inum의 크기: %d\n", sz2);
	printf("변수 dnum의 크기: %d\n", sz3);
	printf("char의 크기: %d\n", sz4);
	printf("int의 크기: %d\n", sz5);
	printf("long의 크기: %d\n", sz6);
	printf("long long의 크기: %d\n", sz7);
	printf("float의 크기: %d\n", sz8);
	printf("double의 크기: %d\n", sz9);


}