#include <stdio.h>

int CelToFah(int c)
{
	int Fah;
	Fah = 1.8 * c + 32;
	return Fah;
}
int FahToCel(int f)
{
	int Cel;
	Cel = (f - 32) / 1.8;
	return Cel;
}
int main()
{
	int n, c, f, Fah, Cel;
	printf("1.ȭ�� 2.���� :");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("���� �µ��� �Է��ϼ���: ");
		scanf_s("%d", &c);
		Fah = CelToFah(c);
		printf("ȭ�� �µ��� %d�Դϴ�.\n", Fah);
		break;
	case 2:
		printf("ȭ�� �µ��� �Է��ϼ���: ");
		scanf_s("%d", &f);
		Cel = FahToCel(f);
		printf("���� �µ��� %d�Դϴ�.\n", Cel);
		break;
	}
}