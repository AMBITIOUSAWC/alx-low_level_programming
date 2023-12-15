#include <time.h>
#include <stdio.h>

/**
 * main - This is a function
 * Return: Always 0
 */

/* more headers go here */

/* Betty style doc for function main goes here */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	/* your code goes here */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else
		printf("Last digit of %d is %d and is 0\n", n, m);

	return (0);
}

