#include <unistd.h>

/* Declaration of _putchar */
int _putchar(char c);

/**
 * _puts - writes a string to stdout
 * @str: The string to print
 *
 * Return: void
 */
void _puts(const char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
