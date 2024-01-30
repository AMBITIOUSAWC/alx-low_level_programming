#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separator between two numbers
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);

if (separator == NULL)
separator = "";

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i < n - 1)
printf("%s", separator);
}
printf("\n");

va_end(ap);
}
