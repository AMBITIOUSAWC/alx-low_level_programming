#include "main.h"

/**
 * string_nconcat - concatenates two strings up to n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the concatenated string (s1 + s2), or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y, z;
char *s;

if (s1 == NULL)
x = 0;
else
{
for (x = 0; s1[x]; ++x)
;
}

if (s2 == NULL)
y = 0;
else
{
for (y = 0; s2[y]; ++y)
;
}

if (y > n)
y = n;

s = malloc(sizeof(char) * (x + y + 1));

if (s == NULL)
return (NULL);

for (z = 0; z < x; z++)
s[z] = s1[z];

for (z = 0; z < y; z++)
s[z + x] = s2[z];

s[x + y] = '\0';

return (s);
}
