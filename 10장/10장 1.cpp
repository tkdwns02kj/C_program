#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double change(int inch);
	int value;

	printf("inch ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &value);

	printf("%dinch�� %.2lfcm�Դϴ�.\n", value, change(value));

	return 0;
}
double change(int inch) {
	return inch * 2.54;
}