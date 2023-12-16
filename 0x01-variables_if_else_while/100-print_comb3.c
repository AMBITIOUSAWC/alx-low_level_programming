#include <stdio.h>

/* 
The main function is the entry point of the program. It returns an integer value and takes no arguments.
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	for (j = i + 1; j < 10; j++)
	{
		putchar(i + '0');
		putchar(j + '0');

		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
}
