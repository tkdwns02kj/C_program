#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (j = 0; j < 5; j++) {
		for (i = 5; i > 0; i--) {
			if (i > j + 1) {
				printf("");
			}
			else
				printf("%d", i);
		}
		puts("");
	}
}