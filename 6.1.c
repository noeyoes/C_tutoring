#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	char ans1;
	int ans2, ans3, ans4, i;
	int seats[SIZE] = { 0 }; //1���� �迭 ����

	while (1) {
		printf("�¼��� �����Ͻðڽ��ϱ�? y �Ǵ�n");
		scanf(" %c", &ans1);
			
		if (ans1 == 'y') {
			printf("---------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("---------------------------\n");

			//�ݺ����� �̿��ؼ� �迭�� ��Ҹ� ��� 
			for (i = 0; i < SIZE; i++)
				printf(" %d", seats[i]);
			printf("\n");

			printf("���¼� �����Ͻðڽ��ϱ�? ");
			scanf("%d", &ans3);
			if (ans3 == 1)
			{
				printf("���° �¼��� �����Ͻðڽ��ϱ�?");
				scanf("%d", &ans2);

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
			if (ans3 == 2)
			{
				printf("���° �¼��� �����Ͻðڽ��ϱ�? ");
				scanf("%d %d", &ans2, &ans4);

				if (ans2 <= 0 || ans2 > SIZE || ans4 <= 0 || ans4 > SIZE)
				{
					printf("1���� 10������ ���ڸ� �Է��ϼ���");
					continue;
				}

				if (seats[ans2 - 1] == 0)
				{
					seats[ans2 - 1] = 1;
					if (seats[ans4 - 1] == 0)
					{
						seats[ans4 - 1] = 1;
						printf("����Ǿ����ϴ�. ");
					}
					else
						printf("�̹� ����� �ڸ��Դϴ�. \n");
				}

				else
					printf("�̹� ����� �ڸ��Դϴ�.\n");
			}
				
			
		}

		else if (ans1 == 'n')
			return 0;
	}

	return 0;
}