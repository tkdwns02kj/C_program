#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a = 0;
	double b = 0;
	double c = 0;

	printf("¼·¾¾¿Âµµ¸¦ È­¾¾¿Âµµ·Î ¹Ù²ß´Ï´Ù.\n ");
	scanf_s("%lf, %lf, %lf", &a, &b, &c);

	double d = 0;
	d = (9.0 / 5.0) * a + 32.0;
	printf("%0.4lf\n", d);

	double e = 0;
	e = (9.0 / 5.0) * b + 32.0;
	printf("%0.4lf\n", e);

	double f = 0;
	f = (9.0 / 5.0) * c + 32.0;
	printf("%0.4lf\n", f);
	return 0;
}