#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &a[2]; /* Point to a valid memory location within the array */
	*(p + 2) = 98; /* Now this is valid, as it's within the array */
	printf("a[2] = %d\n", a[2]);
	printf("a[4] = %d\n", a[4]); /* This will print 98 */
	return (0);
}

