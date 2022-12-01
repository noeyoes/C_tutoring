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
	printf("1.화씨 2.섭씨 :");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("섭씨 온도를 입력하세요: ");
		scanf_s("%d", &c);
		Fah = CelToFah(c);
		printf("화씨 온도는 %d입니다.\n", Fah);
		break;
	case 2:
		printf("화씨 온도를 입력하세요: ");
		scanf_s("%d", &f);
		Cel = FahToCel(f);
		printf("섭씨 온도는 %d입니다.\n", Cel);
		break;
	}
}