#include <stdio.h>

/* 
The main function is the entry point of the program. It returns an integer value and takes no arguments.
*/
int main(void)
{
	/* Declare an integer variable i */
	int i;

	/* Loop from 0 to 9 */
	for (i = 0; i < 10; i++)
		/* Print the current number */
		putchar(i + '0');
	/* If the current number is not 9, print a comma and a space */
	if (i != 9)
		putchar(',');
	putchar(' ');
	/* Print a newline character after the loop */
	putchar('\n');
	/* Return 0 to indicate successful execution */
	return (0);
}
}
