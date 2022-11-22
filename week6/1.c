#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	char ans1;
	int ans2, ans3, i;
	int numberOfpeople;
	int seats[SIZE] = { 0 };

	while (1) {
		printf("좌석을 예약하시겠습니까? y 또는n \n");
		scanf(" %c", &ans1);

		if (ans1 == 'y') {
			printf("---------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("---------------------------\n");
			for (i = 0; i < SIZE; i++)
				printf(" %d", seats[i]);
			printf("\n");

			printf("몇 좌석 예약하시겠습니까? \n");
			printf("1좌석은 1, 2좌석은 2를 입력하세요 >> ");
			scanf("%d", &numberOfpeople);

			if (numberOfpeople == 1) {
				printf("몇번째 좌석을 예약하시겠습니까? ");
				scanf("%d", &ans2);

				if (ans2 <= 0 || ans2 > SIZE) {
					printf("1부터 10사이의 숫자를 입력하세요\n");
					continue;
				}

				if (seats[ans2 - 1] == 0) {
					seats[ans2 - 1] = 1;
					printf("예약되었습니다.\n");
				}

				else
					printf("이미 예약된 자리입니다.\n");
			}

			else if (numberOfpeople == 2) {
				printf("몇번째 좌석을 예약하시겠습니까? ");
				scanf("%d %d", &ans2, &ans3);


				if (ans2 > SIZE || ans3 > SIZE || ans2 < 0 || ans3 < 0) {
					printf("1부터 10 사이의 숫자를 입력하세요\n");
					continue;
				}

				else if (seats[ans2 - 1] == 0 && seats[ans3 - 1] == 0) {
					seats[ans2 - 1] = 1;
					seats[ans3 - 1] = 1;
					printf("예약되었습니다\n");
				}

				else
					printf("이미 예약된 자리입니다.\n");
			}

		}
		else if (ans1 == 'n')
			break;
	
	}
	return 0;
}