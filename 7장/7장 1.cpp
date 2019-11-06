#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (j = 0; j < 5; j++) {
		for (i = 5; i > j; i--) {
			printf("%d", i);
		}
		puts("");
	}
}