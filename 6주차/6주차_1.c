#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	char ans1;
	int ans2, i, num;
	int seats[SIZE] = { 0 }; //1���� �迭 ����

	while (1) {
		printf("�¼��� �����Ͻðڽ��ϱ�? y �Ǵ�n\n");
		scanf(" %c", &ans1);

		if (ans1 == 'y') {
			printf("---------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("---------------------------\n");

			printf("�� �¼��� �����Ͻðڽ��ϱ�?\n");
			printf("1�¼��� 1, 2�¼��� 2�� �Է��ϼ��� >> ");
			scanf("%d", &num);
			
			if (num == 1) {
				printf("���° �¼��� �����Ͻðڽ��ϱ�? ");
				scanf("%d", &ans2);
			}
			else if (num == 2) {
				printf("���° �¼��� �����Ͻðڽ��ϱ�? ");
				for (int i = 0; i < 2; i++)
					scanf("%d", &ans2);
			}

			//���� ������ ������ ��� ���
			if (ans2 <= 0 || ans2 > SIZE) {
				printf("1���� 10������ ���ڸ� �Է��ϼ���");
				continue;
			}

			//���ڸ��� ������ ��� 
			if (seats[ans2 - 1] == 0) {
				seats[ans2 - 1] = 1;
				printf("����Ǿ����ϴ�.\n");
			}

			else
				printf("�̹� ����� �ڸ��Դϴ�.\n");
		}

		else if (ans1 == 'n')
			return 0;
	}

	return 0;
}