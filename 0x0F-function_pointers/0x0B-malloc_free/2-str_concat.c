#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated string,
 *         or NULL on failure
 *
 * Description:
 * This function concatenates two strings. It allocates memory
 * for the new string and copies the contents of s1, followed by
 * the contents of s2, and null-terminates the result.
 * If either s1 or s2 is NULL, treat it as an empty string.
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
int len_s1 = 0, len_s2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len_s1] != '\0')
len_s1++;

while (s2[len_s2] != '\0')
len_s2++;

concatenated = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));

if (concatenated == NULL)
return (NULL);

for (i = 0; i < len_s1; i++)
concatenated[i] = s1[i];

for (j = 0; j < len_s2; j++)
concatenated[i + j] = s2[j];

concatenated[i + j] = '\0';

return (concatenated);
}
