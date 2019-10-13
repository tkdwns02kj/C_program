#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a = 0;
	scanf_s("%lf", &a);
	printf("%0.3lf\n", a);

	double b = 0;
	b = (9.0 / 5.0) * a + 32.0;
	printf("%0.4lf\n", b);

	return 0;
}