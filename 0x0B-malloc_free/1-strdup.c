#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: string to duplicate
 * Return: pointer to duplicated string on success, NULL on error
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	int i, len = 0;

	if (str == NULL) /* validate str input */
		return (NULL);

	while (*(str + len))
		len++;
	duplicate_str = malloc(sizeof(char) * (len + 1)); /* allocate memory */

	if (duplicate_str == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < len; i++) /* copy the string */
		*(duplicate_str + i) = *(str + i);

	*(duplicate_str + i) = '\0'; /* null terminate the string */

	return (duplicate_str);
}

/**
 * main - main function
 * Return: 0 on success, 1 on failure
 */
int main(void)
{
	char *buffer;

	buffer = _strdup("ALX SE");
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", buffer);
	free(buffer);
	return (0);
}
