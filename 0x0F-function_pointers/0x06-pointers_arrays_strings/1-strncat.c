#include "main.h"

/**
 * _strncat - concatenates two strings up to n characters
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* find the end of the dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* copy up to n characters from the src string to the dest string */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add the terminating null byte */
	dest[i] = '\0';

	return dest;
}

