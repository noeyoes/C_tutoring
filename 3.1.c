
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

	printf("���� ch�� ũ��: %d\n", sz1);
	printf("���� inum�� ũ��: %d\n", sz2);
	printf("���� dnum�� ũ��: %d\n", sz3);
	printf("char�� ũ��: %d\n", sz4);
	printf("int�� ũ��: %d\n", sz5);
	printf("long�� ũ��: %d\n", sz6);
	printf("long long�� ũ��: %d\n", sz7);
	printf("float�� ũ��: %d\n", sz8);
	printf("double�� ũ��: %d\n", sz9);


}