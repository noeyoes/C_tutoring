#include <stdio.h>

int CeltoFah(int tem) {
	int result = 0;
	result = 1.8 * tem + 32;
	return result;
}
int FahtoCel(int tem) {
	int result = 0;
	result = (tem - 32) / 1.8;
	return result;
}
int main(void) {
	int num, tem;
	printf("1. 화씨 2. 섭씨 : ");
	scanf("%d", &num);
	if (num == 1) {
		printf("화씨 온도를 입력하세요 : ");
		scanf("%d", &tem);
		CeltoFah(tem);
		printf("섭씨 온도는 %d 입니다.", CeltoFah(tem));
	}
	else {
		printf("섭씨 온도를 입력하세요 : ");
		scanf("%d", &tem);
		FahtoCel(tem);
		printf("화씨 온도는 %d 입니다.", FahtoCel(tem));
	}
}