#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0, sum = 0, aver=0,high=0;
	int arr[5];


	printf("각 학생의 성적을 입력하세요:");
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
	printf("평균점수 : %d\n최고점수 : %d", aver, high);
	return 0;
}