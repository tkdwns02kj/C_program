#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int intpow(int m, int n);
	int n1, n2;

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &n1, &n2);

	printf("%d���ϱ� %d = %d", n1, n2, intpow(n1, n2));

	return 0;
}
int intpow(int m, int n) {
	return m * n;
}