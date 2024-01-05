#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if ((i == 0 || s[i - 1] == separators[j]) && (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] = s[i] - 'a' + 'A';
			}
		}
	}

	return s;
}
