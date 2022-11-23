#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	int scoreboard[5], Help_Max;
	double average;
	printf("학생 5명의 성적 입력\n ");
	for (int i = 0; i < 5; i++)
	{
		printf("성적을 입력하시오>>");
		scanf("%d", &scoreboard[i]);
	}
	int sum = (scoreboard[0] + scoreboard[1] + scoreboard[2] + scoreboard[3] + scoreboard[4]);
	average = (float)sum / 5;

	Help_Max = scoreboard[0];
	for (int j = 0; j < 5; j++)
	{
		if (Help_Max < scoreboard[j + 1])
		{
			Help_Max = scoreboard[j + 1];
		}
		else
			Help_Max = scoreboard[j];
	}
	printf("평균값 = %0.1f\n", average);
	printf("최대값 = %d\n", Help_Max);
}