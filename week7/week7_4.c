#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double CelToFah(double Cel)
{
	double Fah;
	Fah = 1.8 * Cel + 32;
	return Fah;
}

double FahToCel(double Fah)
{
	double Cel;
	Cel = (Fah - 32) / 1.8;
	return Cel;
}

int main()
{
	int i = 0;
	double  Fah = 0, Cel=0;
	printf("1. ȭ�� 2. ���� :");
	scanf("%d", &i);
	
	if (i = 1)
	{
		printf("ȭ�� �µ��� �Է��ϼ���:");
		scanf("%lf", &Fah);
		Cel = FahToCel(Fah);
		printf("���� �µ��� %f �Դϴ�.\n", Cel);
	}
	if (i = 2)
	{
		printf("���� �µ��� �Է��ϼ���:");
		scanf("%lf", &Cel);
		Fah = CelToFah(Cel);
		printf("ȭ�� �µ��� %f �Դϴ�.\n", Fah);
	}
}