#include <stdio.h>
/**
 * swap_int - Swaps the values of the two integers.
 * @a: The first integer to be sawpped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
	/*the functin that swaps the value of the integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
