#include <stdio.h>

void Convert(int num)
{
	printf("8������ %o, 10������ %d, 16������ %x\n", num, num, num);
}

int main()
{
	int num;
	printf("������ �Է��ϼ���:");
	scanf_s("%d", &num);
	Convert(num);
}