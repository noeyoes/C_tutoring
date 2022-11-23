#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	char ans1;
	int ans2, i, num;
	int seats[SIZE] = { 0 }; //1차원 배열 선언

	while (1) {
		printf("좌석을 예약하시겠습니까? y 또는n\n");
		scanf(" %c", &ans1);

		if (ans1 == 'y') {
			printf("---------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("---------------------------\n");

			printf("몇 좌석을 예약하시겠습니까?\n");
			printf("1좌석은 1, 2좌석은 2를 입력하세요 >> ");
			scanf("%d", &num);
			
			if (num == 1) {
				printf("몇번째 좌석을 예약하시겠습니까? ");
				scanf("%d", &ans2);
			}
			else if (num == 2) {
				printf("몇번째 좌석을 예약하시겠습니까? ");
				for (int i = 0; i < 2; i++)
					scanf("%d", &ans2);
			}

			//예약 가능한 범위를 벗어난 경우
			if (ans2 <= 0 || ans2 > SIZE) {
				printf("1부터 10사이의 숫자를 입력하세요");
				continue;
			}

			//빈자리를 선택한 경우 
			if (seats[ans2 - 1] == 0) {
				seats[ans2 - 1] = 1;
				printf("예약되었습니다.\n");
			}

			else
				printf("이미 예약된 자리입니다.\n");
		}

		else if (ans1 == 'n')
			return 0;
	}

	return 0;
}