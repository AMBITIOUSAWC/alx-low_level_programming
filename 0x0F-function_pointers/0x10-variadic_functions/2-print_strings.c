#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: separator between strings
 * @num_strings: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int num_strings, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, num_strings);

if (separator == NULL)
separator = "";

for (i = 0; i < num_strings; i++)
{
str = va_arg(args, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i < num_strings - 1)
printf("%s", separator);
}
printf("\n");

va_end(args);
}
