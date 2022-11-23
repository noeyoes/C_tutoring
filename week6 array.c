#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int prac1() {
	char ans1, seatnum;
	int ans2, i, ans3;
	int seats[SIZE] = { 0 }; //1차원 배열 선언

	while (1) {
		printf("좌석을 예약하시겠습니까?: (y 또는n)");
		scanf(" %c", &ans1);

		if (ans1 == 'y') {
			printf("---------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("---------------------------\n");

			//반복문을 이용해서 배열의 요소를 출력 
			for (i = 0; i < SIZE; i++)
				printf(" %d", seats[i]);
			printf("\n");

			printf("몇 좌석 예약하시겠습니까?");
			printf("1좌석 1, 2좌석은 2를 입력하세요 >> ");
			scanf(" %d", &seatnum);

			if (seatnum == 2) {
				printf("몇번째 좌석을 예약하시겠습니까?: ");
				scanf("%d %d", &ans2, &ans3);

				//빈자리를 선택한 경우 
				if ((seats[ans2 - 1] == 0) && (seats[ans3 - 1] == 0)) {
					seats[ans2 - 1] = 1;
					seats[ans3 - 1] = 1;
					printf("예약되었습니다.\n");
				}
				else
					printf("이미 예약되었습니다.\n");

				//예약 가능한 범위를 벗어난 경우
				if ((ans2 <= 0 || ans2 > SIZE) || (ans3 <= 0 || ans3 > SIZE)) {
					printf("1부터 10사이의 숫자를 입력하세요\n");
					continue;
				}
			}
			/////////////////////////////
			else if (seatnum == 1) {
				printf("몇번째 좌석을 예약하시겠습니까?: ");
				scanf("%d", &ans2);

				//빈자리를 선택한 경우 
				if (seats[ans2 - 1] == 0) {
					seats[ans2 - 1] = 1;
					printf("예약되었습니다.\n");
				}
				else
					printf("이미 예약되었습니다.\n");


				//예약 가능한 범위를 벗어난 경우
				if ((ans2 <= 0 || ans2 > SIZE)) {
					printf("1부터 10사이의 숫자를 입력하세요");
					continue;
				}
			}
		}
		else if (ans1 == 'n')
			return 0;
	}
	return 0;
}

int prac2() {
	int score[5];
	int aver, max=0, sum=0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", score[i]);
		sum += score[i];
	}
	aver = sum / 5;

	for (int i = 0; i < 5; i++) {
		if (max < score[i])
			max = score[i];
	}
	printf("평균점수: %d ,최고점수 %d", aver, max);
	
	return 0;
}