#include "main.h"

/**
 * clear_bit - the value of a bit to be set to 0
 * @n: A pointer to the number to change
 * @index: The index of the bit to clear
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n &= ~(1UL << index);
return (1);
}
