#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* find the end of the dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* copy the src string to the dest string */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add the terminating null byte */
	dest[i] = '\0';

	return dest;
}

