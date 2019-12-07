#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int data[] = { 3,21,35,57,24,82,8 };

	for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
		*(data + i) += 10;
		printf("%d", *(data + i));
		printf("\n");
	}
}