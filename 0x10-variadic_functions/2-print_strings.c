#include <stdio.h>
#include <stdarg.h>

#ifndef PRINT_STRINGS_H
#define PRINT_STRINGS_H

/* Declare the print_strings function */
void print_strings(const char *separator, const unsigned int num_strings, ...);

#endif /* PRINT_STRINGS_H */

void print_strings(const char *separator, const unsigned int num_strings, ...)
{
	unsigned int i;
	va_list args;
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

int main(void)

{
	/* Test the print_strings function */
	print_strings(", ", 3, "Hello", "World", "!");
	return 0;

}

