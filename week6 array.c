#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int prac1() {
	char ans1, seatnum;
	int ans2, i, ans3;
	int seats[SIZE] = { 0 }; //1���� �迭 ����

	while (1) {
		printf("�¼��� �����Ͻðڽ��ϱ�?: (y �Ǵ�n)");
		scanf(" %c", &ans1);

		if (ans1 == 'y') {
			printf("---------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("---------------------------\n");

			//�ݺ����� �̿��ؼ� �迭�� ��Ҹ� ��� 
			for (i = 0; i < SIZE; i++)
				printf(" %d", seats[i]);
			printf("\n");

			printf("�� �¼� �����Ͻðڽ��ϱ�?");
			printf("1�¼� 1, 2�¼��� 2�� �Է��ϼ��� >> ");
			scanf(" %d", &seatnum);

			if (seatnum == 2) {
				printf("���° �¼��� �����Ͻðڽ��ϱ�?: ");
				scanf("%d %d", &ans2, &ans3);

				//���ڸ��� ������ ��� 
				if ((seats[ans2 - 1] == 0) && (seats[ans3 - 1] == 0)) {
					seats[ans2 - 1] = 1;
					seats[ans3 - 1] = 1;
					printf("����Ǿ����ϴ�.\n");
				}
				else
					printf("�̹� ����Ǿ����ϴ�.\n");

				//���� ������ ������ ��� ���
				if ((ans2 <= 0 || ans2 > SIZE) || (ans3 <= 0 || ans3 > SIZE)) {
					printf("1���� 10������ ���ڸ� �Է��ϼ���\n");
					continue;
				}
			}
			/////////////////////////////
			else if (seatnum == 1) {
				printf("���° �¼��� �����Ͻðڽ��ϱ�?: ");
				scanf("%d", &ans2);

				//���ڸ��� ������ ��� 
				if (seats[ans2 - 1] == 0) {
					seats[ans2 - 1] = 1;
					printf("����Ǿ����ϴ�.\n");
				}
				else
					printf("�̹� ����Ǿ����ϴ�.\n");


				//���� ������ ������ ��� ���
				if ((ans2 <= 0 || ans2 > SIZE)) {
					printf("1���� 10������ ���ڸ� �Է��ϼ���");
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
	printf("�������: %d ,�ְ����� %d", aver, max);
	
	return 0;
}