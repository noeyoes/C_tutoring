int main(void)
{
	int num1, num2;
	int result = 0;

	printf("숫자 한 개를 입력하세요: ");
	scanf("%d", &num1);
	num2 = num1;
	result = num1;

	for (int i = 0; i < num1 - 1 ; i++)
	{
		num1 = num1 - 1;
		result = result * num1;
	}

	num1 = num2;
	printf("%d! = %d", num1, result);
}