#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - This is the main function
 * Return: Always 0
 */

/* more headers go here */

/* betty style doc for function main goes here */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes here */
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);

return (0);
}

