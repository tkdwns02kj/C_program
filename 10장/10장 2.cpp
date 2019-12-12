#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int intpow(int m, int n);
	int n1, n2;

	printf("두 개의 정수를 입력하시오: ");
	scanf_s("%d %d", &n1, &n2);

	printf("%d곱하기 %d = %d", n1, n2, intpow(n1, n2));

	return 0;
}
int intpow(int m, int n) {
	return m * n;
}