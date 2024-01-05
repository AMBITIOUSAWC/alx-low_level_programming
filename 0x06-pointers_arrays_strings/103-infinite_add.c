#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result, or 0 if it cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	i--;
	j--;
	l = 0;
	for (k = 0; k < size_r - 1; k++, i--, j--)
	{
		if (i >= 0)
			l += n1[i] - '0';
		if (j >= 0)
			l += n2[j] - '0';
		if (i < 0 && j < 0 && l == 0)
		{
			break;
		}
		r[k] = l % 10 + '0';
		l /= 10;
	}
	r[k] = '\0';
	if (l > 0)
		return (0);
	for (k--, m = 0; m < k; m++, k--)
	{
		n = r[k];
		r[k] = r[m];
		r[m] = n;
	}
	return (r);
}

