#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
    char hexDigits[] = "0123456789abcdef";
    int i;

    for (i = 0; i < 16; i++)
    {
        putchar(hexDigits[i]);
    }

    putchar('\n');

    return 0;
}

