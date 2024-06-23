#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: A string representing a binary number.
 *
 * Return: The converted number, or 0 if b contains a character
 *         that is not '0' or '1', or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
int idx;
unsigned int num = 0;

if (!b)
return (0);

for (idx = 0; b[idx]; idx++)
{
if (b[idx] < '0' || b[idx] > '1')
return (0);

num = num * 2 + (b[idx] - '0');
}

return (num);
}
