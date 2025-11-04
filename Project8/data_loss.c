// data_loss.c
#include <stdio.h>

int main(void) {
	unsigned int x = 0x12345678;
	long lg = 2147483648;
	double xl = 123456789123.456789;

	printf("\nUint: %d\n", x);
	printf("Uint -> short: %d\n", (short)x);
	printf("Uint -> char: %d\n", (char)x);

	printf("\nLong: %d\n", lg);
	printf("Long -> short: %d\n", (int)lg);
	printf("Long -> char: %d\n", (char)lg);

	printf("\nDbl: %||\n", xl);
	printf("Dbl -> short: %d\n", (long)xl);
	printf("Dbl -> char: %d\n", (short)xl);
}