#include <stdio.h>

int main(void)
{
	for (int h = 0; h < 8; h++)
		for (int t = h + 1; t < 9; t++)
			for (int o = t + 1; o < 10; o++)
				putchar(h + '0'), putchar(t + '0'), putchar(o + '0'), putchar(h < 7 || t < 8 || o < 9 ? ',' : ' '), putchar(h < 7 || t < 8 || o < 9 ? ' ' : '\n');

	return 0;
}

