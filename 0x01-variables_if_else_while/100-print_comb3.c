#include <stdio.h>

int main(void)
{
	int tens, ones;

	for (tens = 0; tens < 9; tens++)
		for (ones = tens + 1; ones < 10; ones++)
			putchar(tens + '0'), putchar(ones + '0'), putchar(tens < 8 || ones < 9 ? ',' : ' '), putchar(tens < 8 || ones < 9 ? ' ' : '\n');

	return 0;
}

