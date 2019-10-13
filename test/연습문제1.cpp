#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 0;
	printf("4자리 정수 입력:");
	scanf_s("%d", &a);
	printf("%10d\n", a);
	printf("%010d\n", a);
	printf("%+010d\n", a);
	printf("%d\n", a);
	printf("%10od\n", a);
	printf("%0#10od\n", a);
	printf("%10xd\n", a);
	printf("%0#10xd\n", a);

	return 0;
}