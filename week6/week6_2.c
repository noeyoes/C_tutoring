#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0, sum = 0, aver=0,high=0;
	int arr[5];


	printf("�� �л��� ������ �Է��ϼ���:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];

		if (arr[i] >= high)
		{
			high = arr[i];
		}
	}
	aver = sum / 5;
	printf("������� : %d\n�ְ����� : %d", aver, high);
	return 0;
}