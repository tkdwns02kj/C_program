#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double change(int inch);
	int value;

	printf("inch 값을 입력하시오: ");
	scanf_s("%d", &value);

	printf("%dinch는 %.2lfcm입니다.\n", value, change(value));

	return 0;
}
double change(int inch) {
	return inch * 2.54;
}