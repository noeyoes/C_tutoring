#include <stdio.h>

int main(void)
{
	int kor, eng, mat, a;
	printf("����,����,���� ������ �Է��Ͻÿ�:");
	scanf_s("%d %d %d", &kor, &eng, &mat);
	a = (kor + eng + mat) / 3;
	if (a >= 90)
		printf("A");
	if (a >= 80)
		printf("B");
	if (a >= 70)
		printf("C");
	if (a >= 50)
		printf("D");
	else
		printf("F");
	return 0;


}